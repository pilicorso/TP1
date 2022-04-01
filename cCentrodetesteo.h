#pragma once
#include <iostream>
#include <string>
class cPacientes;
class cLaboratorio;


using namespace std;

class cCentrodetesteo {
private:
	int IDcentro;
	int comuna;
	string nombre;
	bool Completo;
	cPacientes* paciente1;
	cPacientes* paciente2;
	cLaboratorio* laboratorio;



public:
	cCentrodetesteo(float _IDcentro1, int _comuna1, string _nombre1);
	~cCentrodetesteo();
	void AsociarLaboratorio(cLaboratorio* _laboratorio);
	void AltaPacientes(cPacientes* _paciente1, cPacientes* _paciente2);
	//void MandarMuestra
};
