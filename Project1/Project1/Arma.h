#pragma once
class Arma
{

private:
	char Nombre[20];
	int peso;
	int puntos;
public:
	Arma(char Nombre[20], int peso, int puntos) {
		for (int i = 0; i = 20; i++) {
			this->Nombre[i] = Nombre[i];
			
		}
		this->peso = peso;
		this->puntos = puntos;


	}
	Arma();
	~Arma();
};

