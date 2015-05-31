// MIT License
// Copyright (c) 2015 Hiroshi Shimamoto

#include "hwinnet.hxx"

using namespace hWin;

netapp::netapp()
{
	WSADATA wd;

	WSAStartup(MAKEWORD(2,0), &wd);
}

netapp::~netapp()
{
	WSACleanup();
}
