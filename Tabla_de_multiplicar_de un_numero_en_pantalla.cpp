#include <iostream>
using namespace std;

int main(){
	int contador=1,multiplo;
	int numero1,numero2;
	
	cout<<"-------------------Bienvenido-----------------------"<<endl;
	cout<<"Ingrese el numero de la tabla de multiplicacion a mostrar : ";
	cin>>numero1;
	cout<<"Ingrese el limite de la tabla del "<<numero1<<" a mostrar: ";
	cin>>numero2;
	multiplo=numero1;
	
	while (contador<=numero2){
		cout<<numero1<<" x ";
		cout<<contador<<"= ";
		cout<<multiplo<<endl;
		multiplo=multiplo+numero1;
		contador=contador+1;
	}
	
	return 0;
}