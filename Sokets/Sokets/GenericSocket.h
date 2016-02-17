#pragma once
#define WIN_32_LEAN_AND_MEAN
#include <WinSock2.h>
#include <Windows.h>
#include "SocketTools.h"
class GenericSocket
{
	SOCKET Precios;
public:
	GenericSocket(int type);
	GenericSocket();
	~GenericSocket();
};

