#include <iostream>
#include <string>
#include "enum.h"

using namespace std;
//devuelve Negativo, Positivo, Sin resultado del enum.
string resultadotesteostring(eResultado resultado) {
	switch (resultado)
	{
	case eResultado::Negativo:
			return "Negativo";
			break;
	case eResultado::Positivo:
				return "Positivo";
				break;
	case eResultado::Sin_resultado:
					return "Sin resultado";
					break;
	}
}