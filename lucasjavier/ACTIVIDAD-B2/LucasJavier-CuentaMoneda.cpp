#include <iostream>
using namespace std ;
int  main()
{
	int x, d= 0 , d1= 0 , d2= 0 ;
	float n, e= 0 , e1= 0 , e2= 0 ;
	cout<< "Ingrese el valor de monedas: " ;
	cin>>x;
	do {
		cout<< " Escriba la cantidad de las monedas (0.10,0.25): " ;
		cin>>n;
		d=d+1;
		e=e+n;
		if (n==0.10){
			d1=d1+1;
			e1=e1+x;
		} else {
		d2=d2+1;
		e2=e2+n;
		}
	} while (d<x);
	cout<< " Mostrarse resultado: " <<endl;
	cout<< "El numero de monedas incorporadas es: " <<d<<endl;
	cout<< "El valor total del dinero contado es: " <<e<<endl;
	cout<< " El numero de monedas de 0.10c incorporadas es: " <<d1<<endl;
	cout<< " Total de dinero en monedas de 0.10c: " <<e1<<endl;
	cout<< "Numero de monedas de 0,25c incorporadas: " <<d2<<endl;
	cout<< "El valor del dinero en monedas de 0.25c es: " <<e2<<endl;
	return 0;
}
