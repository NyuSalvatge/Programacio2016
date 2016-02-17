#pragma once
#include "SocketAdress.h"



SocketAdress::SocketAdress(uint8_t a, uint8_t b, uint8_t c, uint8_t d, int puerto)
{
	Dani.sin_addr.S_un.S_un_b.s_b1 = a;
	Dani.sin_addr.S_un.S_un_b.s_b2 = b;
	Dani.sin_addr.S_un.S_un_b.s_b3 = c;
	Dani.sin_addr.S_un.S_un_b.s_b4 = d;
	//std::cout << Dani.sin_addr.S_un.S_addr;
}

SocketAdress::SocketAdress()
{
}


SocketAdress::~SocketAdress()
{
}
