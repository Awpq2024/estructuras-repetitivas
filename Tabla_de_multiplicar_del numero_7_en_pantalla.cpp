#include <iostream>
using namespace std;

int main(){
	int contador=1,multiplo;
	int n,m;
	
	cout<<"-------------------Bienvenido-----------------------"<<endl;
	cout<<"Ingrese el numero de la tabla de multiplicacion a mostrar : ";
	cin>>n;
	cout<<"Ingrese el limite de la tabla del "<<n<<" a mostrar: ";
	cin>>m;
	multiplo=n;
	
	while (contador<=m){
		cout<<n<<" x ";
		cout<<contador<<"= ";
		cout<<multiplo<<endl;
		multiplo=multiplo+n;
		contador=contador+1;
	}
	
	return 0;
}