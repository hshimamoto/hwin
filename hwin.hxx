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
};

class wnd {
public:
	wnd();
	virtual ~wnd();
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
};

}; // hWin

extern int hWinMain(HINST, LPTSTR, int);

#endif // HWIN_HXX
