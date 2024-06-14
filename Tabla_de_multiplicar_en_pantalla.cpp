#include <iostream>
using namespace std;

int main(){
	int contador=1,multiplo=7;
	int n;
	
	cout<<"-------------------Bienvenido-----------------------"<<endl;
	cout<<"Ingrese hasta que numero quiere la tabla del 7: ";
	cin>>n;
	
	while (contador<=n){
		cout<<"7 x ";
		cout<<contador<<"= ";
		cout<<multiplo<<endl;
		multiplo=multiplo+7;
		contador=contador+1;
	}
	
	return 0;
}