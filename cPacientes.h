#pragma once
#include<iostream>
#include <string>
#include "enum.h"

using namespace std;

class cPacientes {
private:
	string nombre;
	string apellido;
	int dni;
	int numerotelefono;
	bool fiebre;
	bool tos;
	bool mocos;
	bool contactoestrecho;
	bool dolorcabeza;
	bool dolorgarganta;
	eResultado ResultadoTesteo;

public:
	cPacientes(string _nombre, string _apellido, int _dni, int _numerotelefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoestrecho, bool _dolorcabeza, bool _dolorgarganta, eResultado resultado);
	~cPacientes();


	void Resultado();
};