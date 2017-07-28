#include<iostream>
#include <stdio.h> 
#include <math.h> 
using namespace std;
int menu();
float ejercicio1(float,float,float,float);



int main(){
	int continuar = 0;
	while(continuar == 0){
		int opcion;
		opcion = menu();
		switch(opcion){
			case 1:
				float coordenadax1;
				float coordenadax2;
				float coordenaday1;
				float coordenaday2;
				cout<<"Ingrese la primera coordenada en x: ";
				cin>>coordenadax1;
				cout<<"Ingrese la segunda coordenada en x: ";
				cin>>coordenadax2;
				cout<<"Ingrese la primera coordenada en y: ";
				cin>>coordenaday1;
				cout<<"Ingrese la segunda coordenada en y: ";
				cin>>coordenaday2;
				float respuesta;
				respuesta = ejercicio1(coordenadax1,coordenadax2,coordenaday1,coordenaday2);
				cout<<"La respuesta es: "<<respuesta<<endl;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				continuar = 1;
				cout<<"Gracias"<<endl;
		}
	}


	return 0;
}

int menu(){
	int salida;
	cout<<"		Menu"<<endl;
	cout<<"1. Ejercicio 1"<<endl;
	cout<<"2. Ejercicio 2"<<endl;
	cout<<"3. Ejercicio 3"<<endl;
	cout<<"4. salir"<<endl;
	cin>>salida;
	return salida;
}

float ejercicio1(float x1, float x2, float y1, float y2){
	float resta1;
	float resta2;
	resta1 = x2-x1;
	resta2 = y2-y1;
	float cuadrado1;
	float cuadrado2;
	cuadrado1 = resta1*resta1;
	cuadrado2 = resta2*resta2;
	float respuesta;
	respuesta = cuadrado1+cuadrado2;
	float total;
	total = sqrt(respuesta);
	return total;
}








