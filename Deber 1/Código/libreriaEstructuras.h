/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* AUTOR: Ricardo Morales
* NRC: 6396                                                       *
******************************************************************/

#ifndef LIBRERIAESTRUCTURAS_H_INCLUDED
#define LIBRERIAESTRUCTURAS_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


using namespace std;

class libreriaEstructuras {

public:
	string leer(string,int);
	bool validar(string, int);
};

string leer(string mensage,int tipo) {
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validar(entrada, tipo)) {
		cout << "Valor no valido reingrese" << endl;
		cin >> entrada;
	}
	return entrada;
}


/**
	@param tipo 1 para enteros 2 para flotantes
*/
bool validar(string entrada, int tipo) {
	int contador = 0;
	try {
		for (int i = 0; i < entrada.length(); i++) {
			if (isalpha(entrada[i])) {
				throw 1;
			}
			if (!isdigit(entrada[i]) && tipo == 1) {
				throw 1;
			}
			if (entrada[i] == '.') {
				contador++;
			}
			if ((isdigit(entrada[i]) == 0 && entrada[i] != '.' && entrada[i] != '-') || (contador>1)) {
				throw 1;
			}
		}
	}
	catch (int e) {
		return true;
	}
	return false;
}
#endif // LIBRERIAESTRUCTURAS_H_INCLUDED
