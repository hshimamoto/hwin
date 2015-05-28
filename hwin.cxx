// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwin.hxx"

#include "hwin_defwndproc.hxx"

#include <list>

using namespace std;

namespace hWin {

static HINST instance;

static LRESULT CALLBACK def_wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp);

static list<wndproc *> freelist, usedlist;

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

LPCTSTR cls::name(void)
{
	return wc.lpszClassName;
}

wnd::wnd(cls *p) : c(p)
{
}

wnd::~wnd()
{
}

LRESULT wnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return 0;
}

HWND wnd::create(void)
{
	if (freelist.empty())
		return NULL;

	HWND w = ::CreateWindow(c->name(), "wnd", WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
			NULL, NULL, instance, NULL);
	wndproc *pwp = freelist.front();

	freelist.pop_front();
	usedlist.push_back(pwp);

	*(pwp->w) = this;
	SetWindowLongPtr(w, GWLP_WNDPROC, (LONG_PTR)pwp->proc);

	return w;
}

app::app()
{
}

app::~app()
{
}

void app::msgloop(void)
{
	MSG msg;

	while (::GetMessage(&msg, NULL, 0, 0)) {
		::TranslateMessage(&msg);
		::DispatchMessage(&msg);
	}
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

	for (int i = 0; i < HWIN_MAX_WINDOW; i++)
		freelist.push_back(&a__wnds[i]);

	return hWinMain(inst, line, show);
}
