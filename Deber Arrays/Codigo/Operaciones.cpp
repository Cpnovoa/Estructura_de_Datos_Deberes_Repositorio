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
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void encerarArray(int *, int );
void llenarArray(string, int *, int);
void llenarAleatorioArray(int *, int);
void minimoComunMultiplo(int *, int);
void maximoComumDenom(int *, int);
void imprimirArray(int *, int);
void minimoComunMultiplo(int *, int );
bool verificarDivisibilidad(int *, int , int );
int arregloMax(int *, int );

////////////////////////////////////////////////////////////////////////
// Name:       encerarArray()
// Purpose:    Implementation of encerarArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void encerarArray(int *vect, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *(vect+i) = 0;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarArray()
// Purpose:    Implementation of llenarArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void llenarArray(string orden, int *vect, int tam)
{
    int i, check = 0, val;
	string valor;
	for (i = 0; i < tam; i++)
	{
        do{
            cout << orden << "(" << i << ")" << endl;
            getline(cin, valor);

            for(int j = 0; j < valor.length(); j++){
                if (!isdigit(valor[j])){
                    cout << "Dato incorrecto, ingrese de nuevo" << endl;
                    check = 1;
                    break;
                } else {
                    check = 0;
                }
            }
        } while (check == 1);
        val = stoi(valor);
        *(vect + i) = val;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarAleatorioArray()
// Purpose:    Implementation of llenarAleatorioArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void llenarAleatorioArray(int *vect, int tam)
{
    srand(time(NULL));
    int i, valor;
	for (i = 0; i < tam; i++)
	{
        valor = 1 + rand() % (5 - 1);
        *(vect + i) = valor;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       imprimirArray()
// Purpose:    Implementation of imprimirArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void imprimirArray(int *vect, int tam)
{
    for (int i = 0; i < tam; i++)
	{
		cout << *(vect + i) << ",";
	}
	cout << "\n";
}

////////////////////////////////////////////////////////////////////////
// Name:       minimoComunMultiplo()
// Purpose:    Implementation of minimoComunMultiplo()
// Return:     void
////////////////////////////////////////////////////////////////////////

void minimoComunMultiplo(int *vect, int tam)
{
	int i,len;
    int intMcm = 1;
	i = 0;
	len = arregloMax(vect,tam);
	for(int i = 2; i <= len; i++){
		while( verificarDivisibilidad(vect,tam,i) ){
			intMcm *= i;
		}
	}
	cout << "El minimo comun multiplo es: " << intMcm << endl;
}

bool verificarDivisibilidad(int *vect, int tam, int indice){
	bool divisible = false;
	for(int i = 0; i < tam; i++){
		if( *(vect+i) % indice == 0){
			divisible = true;
			*(vect+i) = *(vect+i)/tam;
		}
	}
	return divisible;
}

int arregloMax(int *vect, int tam){
	int max = -1;
	if( tam > 1 ){
		max = *(vect+0);
		for(int i = 1; i < tam; i++){
			if ( max < *(vect+i) )
				max = *(vect+i);
		}
	}
	return max;
}

////////////////////////////////////////////////////////////////////////
// Name:       maximoComumDenom()
// Purpose:    Implementation of maximoComumDenom()
// Return:     void
////////////////////////////////////////////////////////////////////////

void maximoComumDenom(int *vect, int tam)
{
    int mcd, res, aux;

    for (int i = 0; i < tam; i++)
    {
        aux = *(vect + i);

        if (i == 0)
        {
            mcd = aux;
        }

        do{
            res = mcd % aux;
            mcd = aux;
            aux = res;
        }while (res != 0);
     }
     cout << "El maximo comun denominador es: " << mcd << endl;
}

