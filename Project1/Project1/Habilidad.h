#pragma once
class Habilidad

{
private:
	char Nombre[20];
	int puntosExperienciaMinimos;

public:
	Habilidad(char Nombre, int puntosExperienciaMinimos) {

		this->Nombre = Nombre;
		this->puntosExperienciaMinimos = puntosExperienciaMinimos;
	}
	Habilidad();
	~Habilidad();
};

