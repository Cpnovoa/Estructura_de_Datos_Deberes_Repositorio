/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Christian Novoa										  *
* Modified: martes, 26 de mayo de 2020 05:03:27 p. m.			  *
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <sstream>
#include <stdlib.h>
#include "Formula.cpp"
#include "Fraction.cpp"
#include "MisLibrerias.h"
#include "libreriaEstructuras.h"

using namespace std;

int main()
{
	GetNumberData objGetn;
	float a, b, c, d;
	string data;

	cout << "Ingrese los datos de las fracciones a/b; c/d" << endl;

	data = objGetn.leer("Ingrese a: ", 2);

	data = objGetn.read("Ingrese b: ");

	data = objGetn.read("Ingrese c: ");

	data = objGetn.read("Ingrese d: ");

	system("pause");
	return 0;
}
