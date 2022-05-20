#include <iostream>
using namespace std ;
int  main()
{
	int a, b= 0 , b1= 0 , b2= 0 ;
	float x, m= 0 , m1= 0 , m2= 0 ;
	cout<< "Ingreso de la cantidad de monedas: " ;
	cin>>a;
	do {
		cout<< " Ingrese el valor de las monedas (0.10,0.25): " ;
		cin>>x;
		b=b+ 1 ;
		m=m+x;
		if (x== 0.10 ){
			b1=b1+ 1 ;
			m1=m1+x;
		} else {
		b2=b2+ 1 ;
		m2=m2+x;
		}
	} while (b<a);
	cout<< " Resultado: " <<endl;
	cout<< "La cantidad de monedas ingresadas es: " <<b<<endl;
	cout<< "El total de dinero contado es: " <<m<<endl;
	cout<< " La antidad de monedas de 0.10c ingresadas es: " <<b1<<endl;
	cout<< " Total de dinero en monedas de 0.10c: " <<m1<<endl;
	cout<< "Cantidad de monedas de 0,25c ingresadas: " <<b2<<endl;
	cout<< "La cantidad de dinero en monedas de 0.25c es: " <<m2<<endl;
	return  0 ;
}
