#include "cCentrodetesteo.h"
#include "cLaboratorio.h"
#include "cPacientes.h"

using namespace std;

cCentrodetesteo::cCentrodetesteo(float _IDcentro, int _comuna, string _nombre)
{
	this->nombre = _nombre;
	this->IDcentro = _IDcentro;
	this->comuna = _comuna;
	Completo = false;

}

cCentrodetesteo::~cCentrodetesteo()
{
}

void cCentrodetesteo::AsociarLaboratorio(cLaboratorio* _laboratorio)
{
	this->laboratorio = _laboratorio;
}

void cCentrodetesteo::AltaPacientes(cPacientes* _paciente1, cPacientes* _paciente2)
{
	if (paciente1 != NULL) {
		this->paciente1 = _paciente1;
	}
	if (paciente2 != NULL) {
		this->paciente2 = _paciente2;
	}
}

