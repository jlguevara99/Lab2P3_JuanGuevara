#include<iostream>
#include <stdio.h> 
#include <math.h>
#define PI 3.14159265
using namespace std;
int menu();
float ejercicio1(float,float,float,float);
double secuenciaseno(double);
double secuenciacoseno(double);
double radianes(double);
double radianes2(double);
int factorial(int);
double angulob(double,int,int);
double Grados(double);
double anguloC(double,double);
int ladoc(double,double,int);
double area(double,double,double);
double alturaA(double, double, double);
double alturaB(double, double, double);
double alturaC(double, double, double);

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
				int opcion2;
				cout<<"Ingrese la opcion [1. seno/2. coseno]"<<endl;
				cin>>opcion2;
				double grados;
				cout<<"Ingrese los grados:";
				cin>>grados;
				double convertido;
				convertido = radianes(grados);
				if(opcion2 == 1){
					double senoRespuesta;
					senoRespuesta = secuenciaseno(convertido);
					cout<<"La respuesta es: "<<senoRespuesta<<endl;
				}else{
					double cosenoRespuesta;
					cosenoRespuesta = secuenciacoseno(convertido);
					cout<<"La respuesta es: "<<cosenoRespuesta<<endl;
				}
				break;
			case 3:
					double ladoa;
					double ladob;
					double anguloA;
					cout<<"Ingrese el lado a: "<<endl;
					cin>>ladoa;
					cout<<"Ingrese el lado b: "<<endl;
					cin>>ladob;
					cout<<"Ingrese el angulo: "<<endl;
					cin>>anguloA;
					double Aradianes;
					Aradianes = radianes(anguloA);
					//Sacar el angulo B
					double anguloB;
					anguloB = angulob(Aradianes,ladoa,ladob);
					double desconversion;
					desconversion = Grados(anguloB);
					//
					cout<<"El angulo A es: "<<anguloA<<endl;
					cout<<"El angulo B es: "<<desconversion<<endl;
					cout<<"El angulo C es: "<<anguloC(desconversion,anguloA)<<endl;
					double anguloCradian;
					double tercerlado;
					double Cradianes;
					anguloCradian = anguloC(desconversion,anguloA);
					Cradianes = radianes(anguloCradian);
					tercerlado = ladoc(Aradianes,Cradianes,ladoa);
					//
					cout<<"El lado a es: "<<ladoa<<endl;
					cout<<"EL lado b es: "<<ladob<<endl;
					cout<<"El lado c es: "<<tercerlado<<endl;
					//area 
					double Area;
					Area = area(ladoa,ladob,tercerlado);
					cout<<"El area es: "<<Area<<endl;
					//alturas
					double altura1;
					double altura2;
					double altura3;
					altura1 = alturaA(ladoa,ladob,tercerlado);
					altura2 = alturaB(ladoa,ladob,tercerlado);
					altura3 = alturaC(ladoa,ladob,tercerlado);
					cout<<"La altura a es: "<<altura1<<endl;
					cout<<"La altura b es: "<<altura2<<endl;
					cout<<"La altura c es: "<<altura3<<endl;
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
	cout<<"4. Salir"<<endl;
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

double secuenciaseno(double grado){
	double respuesta=0;
	for(int i = 0; i < 17; i++) {
		double numerador;
		numerador = pow(-1,i);
		double suma;
		suma = (2*i)+1;
		int denominador;
		denominador = factorial(suma);
		double division;
		division = numerador/denominador;
		respuesta += division*pow(grado,(2*i)+1); 
		
	}
	return respuesta;
}

double secuenciacoseno(double grado){
	double respuesta = 0;
	for(int i = 0; i < 17; i++) {
		double denominador;
		denominador = factorial(2*i);
		respuesta +=((pow(-1,i))/denominador)*pow(grado,2*i);
	}
	return respuesta;
}

double radianes(double grado){
	double resultado;
	resultado = (grado*PI/180);
	return resultado;
}

int factorial(int numero){
	int acumulador = 1;
	for(int i = 1; i <= numero; i++) {
		acumulador*=i;
	}
	return acumulador;
}

double angulob(double grado,int ladoa, int ladob){
	double senoa;
	senoa = secuenciaseno(grado);
	return asin((ladob*senoa)/ladoa);

}

double Grados(double radian){
	double resultado;
	resultado = (radian*180/PI);
	return resultado;
}

double anguloC(double anguloA, double anguloB){
	return 180-(anguloA+anguloB); 

}

int ladoc(double anguloA, double anguloC, int ladoA){
	double senoA;
	double senoC;
	senoA = secuenciaseno(anguloA);
	senoC = secuenciaseno(anguloC);
	return (senoC*ladoA)/senoA;
}

double area(double ladoa, double ladob, double ladoc){
	double semip;
	semip= (ladoa+ladob+ladoc)/2;
	return sqrt((semip*(semip-ladoa)*(semip-ladob)*(semip-ladoc)));
}

double alturaA(double ladoa, double ladob, double ladoc){
	double semip;
	semip = (ladoa+ladob+ladoc)/2;
	return (2/ladoa)*sqrt((semip*(semip-ladoa)*(semip-ladob)*(semip-ladoc)));
}

double alturaB(double ladoa, double ladob, double ladoc){
	double semip;
	semip = (ladoa+ladob+ladoc)/2;
	return  (2/ladob)*sqrt((semip*(semip-ladoa)*(semip-ladob)*(semip-ladoc)));
}

double alturaC(double ladoa, double ladob, double ladoc){
	double semip;
	semip = (ladoa+ladob+ladoc)/2;
	return  (2/ladoc)*sqrt((semip*(semip-ladoa)*(semip-ladob)*(semip-ladoc)));

}
