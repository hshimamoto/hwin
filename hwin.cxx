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

wnd::wnd(cls *c) : wndclass(c), handle(NULL), pwp(NULL)
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

	if (handle)
		return handle;

	handle = ::CreateWindow(wndclass->name(), "wnd", WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
			NULL, NULL, instance, NULL);
	pwp = freelist.front();

	freelist.pop_front();
	usedlist.push_back(pwp);

	origproc = (WNDPROC)::GetWindowLongPtr(handle, GWLP_WNDPROC);
	*(pwp->w) = this;
	::SetWindowLongPtr(handle, GWLP_WNDPROC, (LONG_PTR)pwp->proc);

	return handle;
}

void wnd::destroy(void)
{
	if (handle)
		::DestroyWindow(handle);
	// restore
	::SetWindowLongPtr(handle, GWLP_WNDPROC, (LONG_PTR)origproc);
	usedlist.remove(pwp);
	freelist.push_back(pwp);
	pwp = NULL;
}

notify_wnd::notify_wnd(cls *c) : wnd(c)
{
}

notify_wnd::~notify_wnd()
{
}

LRESULT notify_wnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return 0;
}

notify::notify(notify_wnd *w) : w(w)
{
}

notify::~notify()
{
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

	// initialize wndproc array
	for (int i = 0; i < HWIN_MAX_WINDOW; i++)
		freelist.push_back(&a__wnds[i]);

	return hWinMain(inst, line, show);
}
