#include <iostream>
using namespace std;
int main ()
{
	int c=0, n;
	float s=0, x, d, t, t1, iv, f;
	cout<<"Ingrese la cantidad de productos que desea sumar"<<endl;
	cin>>n;
	do{
		cout<<"Ingrese el valor de la compra "<<c+1<<endl;
		cin>>x;
		c=c+1;
		s=s+x;
	}while (c<n);
	cout<<"Ingrese el valor del descuento que desea realizar: "<<endl;
	cin>>d;
	cout<<"Valor bruto de compra: "<<s<<endl;
	t=(s*d)/100;
	cout<<"Valor del descuento: "<<t<<endl;
	t1=s-t;
	iv=t1*0.12;
	cout<<"Valor del IVA: "<<iv<<endl;
	f=(s-t)+iv;
	cout<<"Valor final: "<<f<<endl;
return 0;
}
