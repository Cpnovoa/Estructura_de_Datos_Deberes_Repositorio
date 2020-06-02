#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

/*template <typename T>
void ingresaNumericos(char *,int *);

template <typename T>
void ingresaNumericos(char *msg, T *val){
	int caracter;
	puts(msg);
	int i=0;
	char valor[5];
	while((caracter=getch())!=13){
		if(caracter>=48 && caracter<=57){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	*val=atoi(valor);
}

int main(int argc, char** argv) {
	int val;
	ingresaNumericos("Ingreso de numericos :\n",&val);
	cout<<"\n"<<val<<"\n"<<endl;
	system("pause");
	return 0;
}*/

template <typename T>
void ingresaNumericos(char *,T &);

template <typename T>
void ingresaNumericos(char *msg, T &val){
	int caracter;
	puts(msg);
	int i=0;
	char valor[5];
	while((caracter=getch())!=13){
		if(caracter>=48 && caracter<=57){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	val=atoi(valor);
}

int main(int argc, char** argv) {
	int val;
	ingresaNumericos("Ingreso de numericos :\n",val);
	cout<<"\n"<<val<<"\n"<<endl;
	system("pause");
	return 0;
}
