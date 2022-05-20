//=============================================
//==> Nombre del programa: Sacar cuentas de monedas
//==> Archivo: IbarraEmiko-CuentaMoneda.cpp
//==> Autora: Emiko Ibarra
//==> Fecha de elaboración: 20/05/2022
//==> Fecha de modificación: 20/05/2022
//=============================================
#include <iostream>
using namespace std ;
int  main()
{
	int ei_a, ei_b= 0 , ei_b1= 0 , ei_b2= 0 ;
	float ei_x, ei_m= 0 , ei_m1= 0 ,ei_m2= 0 ;
	cout<< "Ingreso de la cantidad de monedas: " ;
	cin>>ei_a;
	do {
		cout<< " Ingrese el valor de las monedas (0.10,0.25): " ;
		cin>>ei_x;
		ei_b=ei_b+ 1 ;
		ei_m=ei_m+ei_x;
		if (ei_x== 0.10 ){
			ei_b1=ei_b1+ 1 ;
			ei_m1=ei_m1+ei_x;
		} else {
		ei_b2=ei_b2+ 1 ;
		ei_m2=ei_m2+ei_x;
		}
	} while (ei_b<ei_a);
	cout<< " Resultado: " <<endl;
	cout<< "La cantidad de monedas ingresadas es: " <<ei_b<<endl;
	cout<< "El total de dinero contado es: " <<ei_m<<endl;
	cout<< " La antidad de monedas de 0.10c ingresadas es: " <<ei_b1<<endl;
	cout<< " Total de dinero en monedas de 0.10c: " <<ei_m1<<endl;
	cout<< "Cantidad de monedas de 0,25c ingresadas: " <<ei_b2<<endl;
	cout<< "La cantidad de dinero en monedas de 0.25c es: " <<ei_m2<<endl;
cout<<endl<<"============================================="<<endl;
cout<<"//==>Nombre del programa: Sacar cuentas de monedas"<<endl;
cout<<"//==>Archivo: IbarraEmiko-CuentaMoneda.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
	return  0 ;
}
