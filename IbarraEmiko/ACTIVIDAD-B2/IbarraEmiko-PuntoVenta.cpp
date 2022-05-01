#include <iostream>
using namespace std;
int  main ()
{
	int b=0 , e;
	float a=0 , x, t, p, pd, IVA= 0.12 , dsc=0.30 , tt;
	cout<< " Ingresé cuántos elementos va a comprar: " ;
	cin>>e;
	do {
		cout<< " Ingrese el valor: " ;
		cin>>x;
		b=b+ 1;
		a=a+x;
		p=a*IVA;
		cout<< " El IVA de su compra es:$ " <<p<<endl;
		pd=a*dsc;
		cout<< " El descuento de su compra es:$ " <<pd<<endl; 
		t=p+pd;
	} while (b<e);
if (t==a){
		cout<< " Usted aplica a descuento: " <<t<<endl;
		IVA=t*p/ 100 ;
		dsc=t*pd/ 100 ;
	} else {
		tt=a+p-pd;
		cout<< " Su total a pagar es:$ " <<tt<<endl;
}
	return  0 ;
}
