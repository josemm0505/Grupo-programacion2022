#include <iostream>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"Ingrese una cantidad: "<<endl;
	cin>>num1;
	cout<<"Ingrese una cantidad: "<<endl;
	cin>>num2;
	if (num1==num2){
	cout<<"Ambas cantidades son iguales"<<endl;
	}
	else if (num1>num2){
		cout<<"El numero "<<num1<<" es mayor que "<<num2<<endl;
	}
	else{
		cout<<"El numero "<<num2<<" es mayor que  "<<num1<<endl;
	} 
	return 0;
}
