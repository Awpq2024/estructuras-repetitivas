#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Ingrese un numero natural del 1 al 5: ";
	cin>>numero;
	
	switch (numero){
		case 1:
			cout<<"La vocal correspondiente del numero "<<numero<<" es A";
			break;
		case 2:
			cout<<"La vocal correspondiente del numero "<<numero<<" es E";
			break;
		case 3:
			cout<<"La vocal correspondiente del numero "<<numero<<" es I";
			break;
		case 4:
			cout<<"La vocal correspondiente del numero "<<numero<<" es O";
			break;
		case 5:
			cout<<"La vocal correspondiente del numero "<<numero<<" es U";
			break;
		default:
			cout<<"El numero que ingreso no es una opcion valida";
			break;
		
	}
	
	return 0;
}