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

class wnd {
	cls *wndclass;
	HWND handle;
	WNDPROC origproc;
	wndproc *pwp;
public:
	wnd(cls *);
	virtual ~wnd();
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	HWND create(void);
	void destroy(void);
};

class notify_wnd : public wnd {
public:
	notify_wnd(cls *);
	virtual ~notify_wnd();
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
};

class notify {
	notify_wnd *w;
public:
	notify(notify_wnd *w);
	virtual ~notify();
};

class app {
public:
	app();
	virtual ~app();
	void msgloop(void);
};

}; // hWin

extern int hWinMain(HINST, LPTSTR, int);

#endif // HWIN_HXX
