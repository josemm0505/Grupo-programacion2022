#include <iostream>
using namespace std;
int main ()
{
	int c=0, a;
	float e=0, b, d, t, t1, iv, f;
	cout<<"Ingresar los elementos que desea comprar "<<endl;
	cin>>a;
	do{
		cout<<"Escriba el valor de la compra "<<c+1<<endl;
		cin>>b;
		c=c+1;
		e=e+b;
	}while (c<a);
	cout<<"Escriba el valor del descuento: "<<endl;
	cin>>e;
	cout<<"Cantidad de la compra: "<<e<<endl;
	t=(e*d)/100;
	cout<<"Valor del descuento: "<<t<<endl;
	t1=e-t;
	iv=t1*0.12;
	cout<<"Valor de IVA: "<<iv<<endl;
	f=(e-t)+iv;
	cout<<"Valor final: "<<f<<endl;
return 0;
}
