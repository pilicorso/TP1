#pragma once
#include <iostream>
#include <string>

using namespace std;

class cLaboratorio { //creamos class de Laboratorio
private:
	string nombre;
	float IDlaboratorio;
	int comuna;

public:
	cLaboratorio(string _nombre, float _idlaboratorio, int _comuna);
	~cLaboratorio(); //como no hay puntero no usamos el destructor
};
