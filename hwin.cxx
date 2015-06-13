// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwin.hxx"

#include "hwin_defwndproc.hxx"

#include <list>

using namespace std;

namespace hWin {

static HINST instance;

static LRESULT CALLBACK def_wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp);

static list<wndcontainer *> freelist, usedlist;

////////
// cls
//   WNDCLASS wrapper
cls::cls() : registered(false)
{
	memset(&wc, 0, sizeof(wc));
	wc.cbSize = sizeof(wc);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = def_wndproc;
	wc.lpszClassName = "hWin::cls";
}

cls::~cls()
{
}

void cls::reg(void)
{
	wc.hInstance = instance;
	::RegisterClassEx(&wc);
	registered = true;
}

void cls::regClass(void)
{
	reg();
}

LPCTSTR cls::name(void)
{
	if (!registered)
		reg();
	return wc.lpszClassName;
}

////////
// wnd
//   Window class
wnd::wnd(cls *c) :
	wndclass(c), handle(NULL), pwc(NULL),
	style(WS_OVERLAPPEDWINDOW)
{
}

wnd::~wnd()
{
}

LRESULT wnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return 0;
}

void wnd::on_create(void)
{
}

HWND wnd::create(LPCTSTR title)
{
	LPCTSTR def_title = "wnd";

	if (freelist.empty())
		return NULL;

	if (handle)
		return handle;

	if (!title)
		title = def_title;

	handle = ::CreateWindow(wndclass->name(), title, style,
			CW_USEDEFAULT, CW_USEDEFAULT,
			CW_USEDEFAULT, CW_USEDEFAULT,
			NULL, NULL, instance, NULL);
	pwc = freelist.front();

	freelist.pop_front();
	usedlist.push_back(pwc);

	origproc = (WNDPROC)::GetWindowLongPtr(handle, GWLP_WNDPROC);
	*(pwc->w) = this;
	::SetWindowLongPtr(handle, GWLP_WNDPROC, (LONG_PTR)pwc->proc);

	// call on_create for initialize
	on_create();

	return handle;
}

HWND wnd::create(void)
{
	return create(NULL);
}

void wnd::destroy(void)
{
	if (handle)
		::DestroyWindow(handle);
	// restore
	::SetWindowLongPtr(handle, GWLP_WNDPROC, (LONG_PTR)origproc);
	usedlist.remove(pwc);
	freelist.push_back(pwc);
	pwc = NULL;
}

void wnd::update(void)
{
	::UpdateWindow(handle);
}

void wnd::show(int n)
{
	::ShowWindow(handle, n);
}

cls* wnd::get_class(void)
{
	return wndclass;
}

#define HWIN_MAX_NOTIFY	(256)
////////
// notify_wnd
//   Window for handling Notification Area
notify_wnd::notify_wnd(cls *c) : wnd(c)
{
	notifies = new notify *[HWIN_MAX_NOTIFY];
	for (int i = 0; i < HWIN_MAX_NOTIFY; i++)
		notifies[i] = NULL;
}

notify_wnd::~notify_wnd()
{
	delete[] notifies;
}

LRESULT notify_wnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	if (m == WM_HWIN_NOTIFY) {
		if (0 <= wp && wp < HWIN_MAX_NOTIFY) {
			notify *n = notifies[wp];

			if (n)
				n->proc(lp);
		}
	}
	return 0;
}

UINT notify_wnd::notify_add(notify *n)
{
	int id;

	for (id = 0; id < HWIN_MAX_NOTIFY; id++) {
		if (!notifies[id])
			goto found;
	}
	return HWIN_MAX_NOTIFY; // TODO: should be error or throw
found:
	NOTIFYICONDATA *ni = n->get();

	ni->hWnd = get(); // get handle
	ni->uID = id;
	ni->uCallbackMessage = WM_HWIN_NOTIFY;

	notifies[id] = n;

	return id;
}

////////
// notify
//   Notification Class
notify::notify(notify_wnd *w) : w(w)
{
	memset(&ni, 0, sizeof(ni));
	ni.cbSize = sizeof(ni);
	//
	w->notify_add(this);
}

notify::~notify()
{
}

void notify::proc(LPARAM m)
{
}

void notify::add(void)
{
	::Shell_NotifyIcon(NIM_ADD, &ni);
}

void notify::del(void)
{
	::Shell_NotifyIcon(NIM_DELETE, &ni);
}

void notify::mod(void)
{
	::Shell_NotifyIcon(NIM_MODIFY, &ni);
}

static app *thisapp;
////////
// app
//   Application Class
app::app()
{
	thisapp = this;
	inst = instance;
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

void app::init(HINST inst, LPTSTR line, int show)
{
}

int app::main(void)
{
	return 0;
}

void app::exit(void)
{
}

static LRESULT CALLBACK def_wndproc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	return ::DefWindowProc(w, m, wp, lp);
}

HINST getInst(void)
{
	return instance;
}

}; // namespace hWin

using namespace hWin;

int WINAPI _tWinMain(HINST inst, HINST prev, LPTSTR line, int show)
{
	hWin::instance = inst;

	// initialize wndcontainer array
	for (int i = 0; i < HWIN_MAX_WINDOW; i++)
		freelist.push_back(&a__wnds[i]);

	if (thisapp) {
		int ret;

		thisapp->init(inst, line, show);
		ret = thisapp->main();
		thisapp->exit();

		return ret;
	}

	return hWinMain(inst, line, show);
}

int hWinMain(HINST inst, LPTSTR line, int show)
{
	return 0;
}

int hWinMain(HINST, LPTSTR, int) __attribute__((weak));
