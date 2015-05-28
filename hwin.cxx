// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwin.hxx"

#include "hwin_defwndproc.hxx"

namespace hWin {

static HINST instance;

static LRESULT CALLBACK def_wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp);

cls::cls()
{
	memset(&wc, 0, sizeof(wc));
	wc.cbSize = sizeof(wc);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = def_wndproc;
	wc.hInstance = instance;
	wc.lpszClassName = "hWin::cls";
}

cls::~cls()
{
}

void cls::regClass(void)
{
	::RegisterClassEx(&wc);
}

wnd::wnd()
{
}

wnd::~wnd()
{
}

LRESULT wnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return 0;
}

static LRESULT CALLBACK def_wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return ::DefWindowProc(w, m, wp, lp);
}

}; // namespace hWin

using namespace hWin;

int WINAPI _tWinMain(HINST inst, HINST prev, LPTSTR line, int show)
{
	hWin::instance = inst;

	return hWinMain(inst, line, show);
}
