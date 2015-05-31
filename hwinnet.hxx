// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#ifndef HWIN_NET_HXX
#define HWIN_NET_HXX

#include <winsock2.h>
#include <windows.h>

#include "hwin.hxx"

namespace hWin {

class netapp : public app {
public:
	netapp();
	virtual ~netapp();
};

}; // namespace hWin

#endif // HWIN_NET_HXX
