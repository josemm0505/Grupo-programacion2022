#include<iostream>
using namespace std;

int main()
{
	int n, c=0, c1=0, c2=0;
	float x,a=0, a1=0, a2=0;
	cout<<"CANTIDAD DE MONEDAS A INGRESAR: ";
	cin>>n;
	do{
		cout<< "INGRESE EL VALOR DE LA MONEDA (0.10,0.25): ";
		cin>>x;
		c=c+1;
		a=a+x;
		if (x==0.10){
			c1=c1+1;
			a1=a1+x;
		}else{
		c2=c2+1;
		a2=a2+x;
		}
	}while(c<n);
	cout<<"EL RESULTADO FUE: "<<endl;
	cout<<"CANTIDAD DE MONEDAS INGRESADAS: "<<c<<endl;
	cout<<"CANTIDAD TOTAL EN DINERO CONTADO: "<<a<<endl; 
	cout<<"CANTIDAD DE MONEDAS DE 0.10c INGRESADAS: "<<c1<<endl;
	cout<<"CANTIDAD TOTAL EN DINERO DE MONEDAS DE 0.10cc: "<<a1<<endl;
	cout<<"CANTIDAD DE MONEDAS DE 0,.25cc INGRESADAS: "<<c2<<endl;
	cout<<"CANTIDAD TOTAL EN DINERO DE MONEDAS DE 0.25CC: "<<a2<<endl;
	return 0; 
}
