#include <iostream>
using namespace std;
int main ()
{
	int c=0, n;
	float s=0, x, d, t, t1, iv, f;
	cout<<"Ingrese los  productos que desea "<<endl;
	cin>>n;
	do{
		cout<<"Ingrese valor de compra "<<c+1<<endl;
		cin>>x;
		c=c+1;
		s=s+x;
	}while (c<n);
	cout<<"Ingrese valor del descuento: "<<endl;
	cin>>d;
	cout<<"Valor  de compra: "<<s<<endl;
	t=(s*d)/100;
	cout<<"Valor del descuento: "<<t<<endl;
	t1=s-t;
	iv=t1*0.12;
	cout<<"Valor de IVA: "<<iv<<endl;
	f=(s-t)+iv;
	cout<<"Valor final: "<<f<<endl;
return 0;
}

