#!/bin/bash

cat <<_EOF_ > hwin_defwndproc.hxx
using namespace hWin;

#define DEFINE_WNDPROC(n)	\\
wnd *p__wnd ## n; \\
static CALLBACK LRESULT \\
wndproc ## n (HWND w, UINT m, WPARAM wp, LPARAM lp) \\
{ return p__wnd ## n -> proc(w, m, wp, lp); }
_EOF_

for i in `seq 0 255`; do
cat <<_EOF_ >> hwin_defwndproc.hxx
#if $i < HWIN_MAX_WINDOW
DEFINE_WNDPROC($i)
#endif
_EOF_
done

cat <<_EOF_ >> hwin_defwndproc.hxx
namespace hWin {
static struct wndproc a__wnds[HWIN_MAX_WINDOW] = {
_EOF_

for i in `seq 0 255`; do
cat <<_EOF_ >> hwin_defwndproc.hxx
#if $i < HWIN_MAX_WINDOW
{ &p__wnd$i, wndproc$i },
#endif
_EOF_
done

cat <<_EOF_ >> hwin_defwndproc.hxx
}; // a__wnds
}; // namespace hWin
_EOF_
