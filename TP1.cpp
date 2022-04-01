// TP1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "cPacientes.h"
#include "cCentrodetesteo1.h"
#include "cCentrodetesteo2.h"
#include "cLaboratorio.h"

using namespace std;

int main()
{
	cPacientes* miPaciente1 = new cPacientes("Luana","Corso","44417808","2915226293","True","False","True","True","True","False", eResultado::Positivo); //creamos un puntero dinamico de pacientes 
	cPacientes* miPaciente2 = new cPacientes("Pilar","Fava","18436115","2914611921", "False","True","False","False","False","False", eResultado::Negativo);
	cCentrodetesteo1* Centro1 = new cCentrodetesteo1(1); //creamos puntero dinamico de centro de testeo
	cCentrodetesteo2* Centro2 = new cCentrodetesteo2(1);
	cLaboratorio* Labpaciente1 = new cLaboratorio("Luana", "3456", "5"); //puntero dinamico de Laboratorio con pacientes 1 y 2
	cLaboratorio* Labpaciente2 = new cLaboratorio("Pilar", "2387", "9");

	
}

