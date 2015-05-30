// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwin.hxx"

using namespace hWin;

class mynwnd : public notify_wnd {
public:
	mynwnd(cls *p) : notify_wnd(p) {}
};

class mynotify : public notify {
public:
	mynotify(notify_wnd* nw) : notify(nw) {}
};

class mywnd : public wnd {
public:
	mywnd(cls *p) : wnd(p) {}
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
};

LRESULT mywnd::proc(HWND w, UINT m, WPARAM wp, LPARAM lp)
{
	switch (m) {
	case WM_LBUTTONDOWN:
		destroy();
		return 0;
	case WM_DESTROY:
		::PostQuitMessage(0);
		return 0;
	}

	return ::DefWindowProc(w, m, wp, lp);
}

class myapp : public app {
	cls *c;
	wnd *w;
	mynwnd *nw;
	mynotify *n;
public:
	myapp();
	void main(void);
};

myapp::myapp()
{
	c = new cls();
	w = new mywnd(c);

	nw = new mynwnd(c);

	c->regClass();
}

void myapp::main(void)
{
	HWND wnd = w->create();

	::UpdateWindow(wnd);
	::ShowWindow(wnd, SW_SHOW);

	wnd = nw->create();

	::UpdateWindow(wnd);
	::ShowWindow(wnd, SW_SHOW);

	n = new mynotify(nw);

	msgloop();

	nw->destroy();
}

int hWinMain(HINST inst, LPTSTR line, int show)
{
	myapp a;

	a.main();

	return 0;
}
