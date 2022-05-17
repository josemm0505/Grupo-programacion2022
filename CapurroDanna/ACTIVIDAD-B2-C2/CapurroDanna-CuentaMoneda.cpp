// ================================================

// ==> Nombre del programa: Contador de Monedas
// ==> Archivo : CapurroDanna-CuentaMoneda.cpp
// ==>Autor: Danna Capurro
// ==>Fecha de elaboración: 2022-04-29
// ==>Fecha última actualización: 2022-05-17
// ================================================ =
#include<iostream>
using namespace std;
int  main ()
{
	int Dc_n, Dc_c= 0 , Dc_c1= 0 , Dc_c2= 0 ;
	float Dc_x,Dc_a= 0 , Dc_a1= 0 , Dc_a2= 0 ;
	cout<< "CANTIDAD DE MONEDAS A INGRESAR :" <<endl;
	cin>>Dc_n;
	do{
		cout<< " INGRESO EL VALOR DE LA MONEDA (10,25): " ;
		cin>>Dc_x;
		Dc_c=Dc_c+ 1 ;
		Dc_a=Dc_a+Dc_x;
		if (Dc_x== 10 ){
			Dc_c1=Dc_c1+ 1 ;
			Dc_a1=Dc_a1+Dc_x;
		} else {
		Dc_c2=Dc_c2+ 1 ;
		Dc_a2=Dc_a2+Dc_x;
		}
		
		cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Contador de Monedas " <<endl;
cout<< " //==> Archivo : CapurroDanna-CuentaMoneda.cpp " <<endl;
cout<< " //==>Autor: Danna Capurro " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-17 " <<endl;
cout<< " //============================================ ===== " <<endl;

} while (Dc_c<Dc_n);
	cout<< " EL RESULTADO FUE: " <<endl;
	cout<< " CANTIDAD DE MONEDAS INGRESADAS: " <<Dc_c<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO CONTADO: " <<Dc_a<<endl;
	cout<< " CANTIDAD DE MONEDAS DE 10 INGRESADAS: " <<Dc_c1<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO DE MONEDAS DE 10: " <<Dc_a1<<endl;
	cout<< " CANTIDAD DE MONEDAS DE 25 INGRESADAS: " <<Dc_c2<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO DE MONEDAS DE 25: " <<Dc_a2<<endl;
	return 0 ;
}
