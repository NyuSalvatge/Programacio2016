#pragma once
#define WIN_32_LEAN_AND_MEAN
#include <WinSock2.h>
#include <Windows.h>
#include "SocketTools.h"
#include <WS2tcpip.h>
class SocketAdress
{
private:
	sockaddr_in Dani;

public:
	int SetAddress(int Adress);
	SocketAdress(uint8_t a, uint8_t b, uint8_t c, uint8_t d, int puerto);
	SocketAdress();
	~SocketAdress();
};

