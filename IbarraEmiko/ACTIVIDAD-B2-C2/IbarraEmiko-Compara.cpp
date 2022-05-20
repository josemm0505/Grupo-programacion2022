#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout<<"Ingrese un número: "<<endl;
	cin>>a;
	cout<<"Ingrese otro numero: "<<endl;
	cin>>b;
	if (a==b){
	cout<<"Los números son iguales"<<endl;
	}
	else if (a>b){
		cout<<"El numero "<<a<<" es mayor que "<<b<<endl;
	}
	else{
		cout<<"El numero "<<b<<" es mayor "<<a<<endl;
	} 
	return 0;
}
