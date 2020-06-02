/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									   *
* Author:  Christian Novoa										   *
* Modified: Martes, 02 de junio de 2020 7:36:01 a. m.			   *
* NRC: 6396                                                       *
******************************************************************/

#include<iostream>
#include<conio.h>
#include "Operaciones.cpp"

using namespace std;

int main()
{
    int tam = 2;

    /*cout << "Cuantos datos desea ingresar? ";
    cin >> tam;*/

    int *vect = new int[tam];
    encerarArray(vect, tam);
    llenarArray("Ingrese el dato ", vect, tam);
    cout << "Arreglo: \n";
    imprimirArray(vect, tam);
    cout << "\n";
    maximoComumDenom(vect, tam);
    minimoComunMultiplo(vect, tam);


    system("pause");
    return 0;
}
