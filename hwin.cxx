// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwin.hxx"

#include "hwin_defwndproc.hxx"

namespace hWin {

static HINST instance;

}; // namespace hWin

using namespace hWin;

int WINAPI _tWinMain(HINST inst, HINST prev, LPTSTR line, int show)
{
	hWin::instance = inst;

	return hWinMain(inst, line, show);
}
