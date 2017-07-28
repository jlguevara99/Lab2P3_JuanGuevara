#include<iostream>
using namespace std;
int menu();



int main(){
	int continuar = 0;
	while(continuar == 0){
		int opcion;
		opcion = menu();
		switch(opcion){
			case 1:
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
