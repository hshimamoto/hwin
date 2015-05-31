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

class mycls : public cls {
public:
	mycls();
};

mycls::mycls()
{
	wc.hCursor = ::LoadCursor(getInst(), IDC_ARROW);
	wc.hbrBackground = (HBRUSH)::GetStockObject(WHITE_BRUSH);
}

class mywnd : public wnd {
	mynwnd *nw;
	mynotify *n;
public:
	mywnd(cls *p) : wnd(p), nw(NULL), n(NULL) {}
	virtual LRESULT proc(HWND w, UINT m, WPARAM wp, LPARAM lp);
	virtual void on_create(void);
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

void mywnd::on_create(void)
{
	nw = new mynwnd(get_class());
	nw->create();
	n = new mynotify(nw);
}

class myapp : public app {
	mycls *c;
	wnd *w;
public:
	myapp() {};
	void init(void);
	int main(void);
};

void myapp::init(void)
{
	c = new mycls();
	w = new mywnd(c);
}

int myapp::main(void)
{
	w->create();
	w->update();
	w->show(SW_SHOW);

	msgloop();

	return 0;
}

myapp a;

int hWinMain(HINST inst, LPTSTR line, int show)
{
	return 0;
}
