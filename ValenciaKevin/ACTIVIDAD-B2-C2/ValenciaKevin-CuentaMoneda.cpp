//================================================
//==> Nombre del programa: CuentaMoneda
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================
#include <iostream>
using namespace std ;
int  main()
{
	int vca, vcb= 0 , vcb1= 0 , vcb2= 0 ;
	float vcx, vcm= 0 , vcm1= 0 , vcm2= 0 ;
	cout<< "Ingreso la cantidad de monedas: " ;
	cin>>vca;
	do {
		cout<< " Ingrese el valor de la moneda (0.10,0.25): " ;
		cin>>vcx;
		vcb=vcb+ 1 ;
		vcm=vcm+vcx;
		if (vcx== 0.10 ){
			vcb1=vcb1+ 1 ;
			vcm1=vcm1+vcx;
		} else {
		vcb2=vcb2+ 1 ;
		vcm2=vcm2+vcx;
		}
	} while (vcb<vca);
	cout<< " Resultado: " <<endl;
	cout<< "El total de monedas es: " <<vcb<<endl;
	cout<< "El dinero total contado es: " <<vcm<<endl;
	cout<< " La suma de monedas de 0.10c ingresadas es: " <<vcb1<<endl;
	cout<< " Dinero en monedas de 0.10c: " <<vcm1<<endl;
	cout<< "Dinero en monedas de 0,25c: " <<vcb2<<endl;
	cout<< "El total de dinero en monedas de 0.25c es: " <<vcm2<<endl;
//================================================
//==> Nombre del programa: CuentaMoneda
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================
	return  0 ;
}
