// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#ifndef HWIN_HXX
#define HWIN_HXX

#include <windows.h>
#include <tchar.h>

#define HINST	HINSTANCE

#ifdef HWIN_MAX_WINDOW
#if HWIN_MAX_WINDOW > 256
#error "HWIN_MAX_WINDOW must not be greater than 256"
#endif
#else // HWIN_MAX_WINDOW
#define HWIN_MAX_WINDOW 32
#endif // !HWIN_MAX_WINDOW

namespace hWin {

////////
// cls
//   WNDCLASS wrapper
class cls {
	bool registered;
	void reg(void);
protected:
	WNDCLASSEX wc;
public:
	cls();
	virtual ~cls();
	// regClass will be removed
	virtual void regClass(void);
	LPCTSTR name(void);
};

class wnd;

struct wndcontainer {
	wnd **w;
	WNDPROC proc;
};

////////
// wnd
//   Window class
class wnd {
	cls *wndclass;
	HWND handle;
	WNDPROC origproc;
	wndcontainer *pwc;
	// internal
	DWORD style;
public:
	wnd(cls *);
	virtual ~wnd();
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	// hooks
	virtual void pre_proc(HWND w, UINT m, WPARAM wp, LPARAM lp) {}
	virtual void post_proc(HWND w, UINT m, WPARAM wp, LPARAM lp) {}
	//
	virtual void on_create(void);
	HWND create(LPCTSTR title);
	HWND create(void);
	void destroy(void);
	//
	void update(void) {
		::UpdateWindow(handle);
	}
	void show(int n) {
		::ShowWindow(handle, n);
	}
	void postMessage(UINT m, WPARAM wp, LPARAM lp) {
		::PostMessage(handle, m, wp, lp);
	}
	LRESULT sendMessage(UINT m, WPARAM wp, LPARAM lp) {
		return ::SendMessage(handle, m, wp, lp);
	}
	//
	LRESULT wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	//
	HWND get(void) {
		return handle;
	}
	cls *get_class(void);
};

class notify;

////////
// notify_wnd
//   Window for handling Notification Area
class notify_wnd : public wnd {
	notify **notifies;
public:
	notify_wnd(cls *);
	virtual ~notify_wnd();
	virtual void pre_proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	virtual UINT notify_add(notify *n);
};

#define WM_HWIN_NOTIFY	(WM_APP + 0)

////////
// notify
//   Notification Class
class notify {
	notify_wnd *w;
	NOTIFYICONDATA ni;
public:
	notify(notify_wnd *w);
	virtual ~notify();
	virtual void proc(LPARAM m);
	void add(void) {
		::Shell_NotifyIcon(NIM_ADD, &ni);
	}
	void mod(void) {
		::Shell_NotifyIcon(NIM_MODIFY, &ni);
	}
	void del(void) {
		::Shell_NotifyIcon(NIM_DELETE, &ni);
	}
	//
	NOTIFYICONDATA *get(void) {
		return &ni;
	}
	notify_wnd *get_wnd(void) {
		return w;
	}
};

////////
// app
//   Application Class
class app {
protected:
	HINST inst;
public:
	app();
	virtual ~app();
	void msgloop(void);
	//
	virtual void init(HINST, LPTSTR, int);
	virtual int main(void);
	virtual void exit(void);
};

HINSTANCE getInst(void);

}; // hWin

extern int hWinMain(HINST, LPTSTR, int);

#endif // HWIN_HXX
