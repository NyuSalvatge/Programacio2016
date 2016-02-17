#pragma once
#include "GenericSocket.h"





GenericSocket::GenericSocket(int type) {

	Precios = socket(AF_INET, type, 0);
	if (Precios == INVALID_SOCKET) {

		SocketTools::Error("Error al crear el Socket");
	}
}

GenericSocket::GenericSocket()
{
}


GenericSocket::~GenericSocket()
{
	int error = closesocket(Precios);
	if (error == -1) {

		SocketTools::Error("No se ha borrado bien");
	}
}
