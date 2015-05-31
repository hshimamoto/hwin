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
	WNDCLASSEX wc;
public:
	cls();
	virtual ~cls();
	virtual void regClass(void);
	LPCTSTR name(void);
};

class wnd;

struct wndproc {
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
	wndproc *pwp;
public:
	wnd(cls *);
	virtual ~wnd();
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	virtual void on_create(void);
	HWND create(void);
	void destroy(void);
	HWND get(void);
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
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
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
	NOTIFYICONDATA *get(void);
	virtual void proc(LPARAM m);
	void add(void);
	void mod(void);
	void del(void);
};

////////
// app
//   Application Class
class app {
public:
	app();
	virtual ~app();
	void msgloop(void);
};

HINSTANCE getInst(void);

}; // hWin

extern int hWinMain(HINST, LPTSTR, int);

#endif // HWIN_HXX
