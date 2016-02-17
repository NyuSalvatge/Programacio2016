#pragma once
#define WIN_32_LEAN_AND_MEAN
#include <WinSock2.h>
#include <Windows.h>
#include <string>
#include <iostream>

class SocketTools
{
	
public:
	
	static void Charge();
	static void Download();
	static void Error(std::string error);
};

