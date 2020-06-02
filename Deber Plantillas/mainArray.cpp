#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctype.h>
#include <string>

#define E 5

typedef int entero;

using namespace std;

template <typename T>
void encerar(T [10]);
template <typename T>
void ingresar(T [10]);
template <typename T>
void proceso(T [10]);
template <typename T>
void impresion(T [10]);

//desarrollo de la funsión encerar
template <typename T>
void ingresar(T v[10]){
	T val;
	for(entero i=0;i<10;i++){
		cout<<"Valor "<<i+1<<endl;
		cin>>v[i];
	}
}

template <typename T>
void encerar(T v[10]){
	for(entero i=0;i<10;v[i]=0,i++);
}

template <typename T>
void procesar(T v[10]){
	for(entero i=0;i<10;i++){
  		v[i]*=E;
		//v[i]=v[i]*E;
	}
}

template <typename T>
void imprimir(T v[10]){
	for(entero i=0;i<10;i++)
	cout<<v[i]<<", ";
}

int main(int argc, char *argv[])
{
	int v[10];
	encerar(v);
	imprimir(v);
	system("pause");
	ingresar(v);
	imprimir(v);
	system("pause");
	procesar(v);
	imprimir(v);
	system("pause");
	return 0;
}
