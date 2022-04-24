#include <iostream>
using namespace std;

int main ()
{
	int b=0, a;
	float d, c=0;
	cout<<"Ingrese cuántos números va a sumar: "<<endl;
	cin>>a;
	do {
		cout<<"Ingrese el número: "<<endl;
		cin>>d;
		b=b+1; 
		c=c+d;
	}while (b<a);
	cout<<"Los números ingresados son: "<<a<<endl;
	cout<<"La suma total es: "<<c<<endl;
	return 0;
}
