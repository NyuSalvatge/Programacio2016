#pragma once
#include "SocketTools.h"




void SocketTools::Charge() {
	WSAData miau;
	//Aquí es carrega el socket i es guarda un 0 o un -1
	int temp=WSAStartup(MAKEWORD(2, 2), &miau);
	//Si es -1 vol dir que hi ha un error i hem d'imprimir-lo
	if (temp == -1) {

		 Error("Error al cargar");
	}


}
void SocketTools::Download() {
	//Aquí es descarrega el socket i es guarda un 0 o un -1
	int temp = WSACleanup();
	//Si es -1 vol dir que hi ha un error i hem d'imprimir-lo
	if (temp == -1) {

		Error("Error al descargar");
	}

}
void SocketTools::Error(std::string error) {

	int _error = WSAGetLastError();
std::cout << error << ":" << _error << std::endl;
}
