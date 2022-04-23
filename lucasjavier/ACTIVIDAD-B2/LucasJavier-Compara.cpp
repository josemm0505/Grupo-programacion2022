#include <iostream>
using namespace std;
int main()
{
	float J,K;
	cout<<"Escribir el primer valor: "<<endl;
	cin>>J;
	cout<<"Escribir el segundo valor: "<<endl;
	cin>>K;
	if (J==K){
	cout<<"El primer valor es igual al segundo valor"<<endl;
	}
	else if (J>K){
		cout<<"El valor "<<J<<" es mayor que "<<K<<endl;
	}
	else{
		cout<<"El valor "<<K<<" es mayor que "<<J<<endl;
	} 
	return 0;
}
