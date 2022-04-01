#include "cPacientes.h"

using namespace std;

//
cPacientes::cPacientes(string _nombre, string _apellido, int _dni, int _numerotelefono, bool _fiebre, bool _tos, bool _mocos, bool _contactoestrecho, bool _dolorcabeza, bool _dolorgarganta, eResultado resultado) {
	this->nombre = _nombre;
	this->apellido = _apellido;
	this->dni = _dni;
	this->numerotelefono = _numerotelefono;
	this->contactoestrecho = _contactoestrecho;
	this->fiebre = _fiebre;
	this->mocos = _mocos;
	this->tos = _tos;
	this->dolorcabeza = _dolorcabeza;
	this->dolorgarganta = _dolorgarganta;
}
cPacientes::~cPacientes() {

}

void cPacientes::Resultado() //creamos un random para el resultado testeo.
{
	this->ResultadoTesteo = (eResultado)((rand() % (int)eResultado::elem - 1) + 1);
}
