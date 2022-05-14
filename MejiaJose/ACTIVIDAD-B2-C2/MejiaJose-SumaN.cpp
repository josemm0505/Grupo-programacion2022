#include <iostream>
using namespace std;

int main ()
{
	int i=0, n;
	float x, s=0;
	cout<<"Ingrese la cantidad de numeros que desea sumar: "<<endl;
	cin>>n;
	do {
		cout<<"Ingrese el valor del numero: "<<endl;
		cin>>x;
		i=i+1; 
		s=s+x;
	}while (i<n);
	cout<<"La cantidad de numeros ingresados es: "<<n<<endl;
	cout<<"La suma total de los numeros es: "<<s<<endl;
	return 0;
}
