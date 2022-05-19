// ================================================

// ==> Nombre del programa: Contador de Monedas
// ==> Archivo : LucasJavier-CuentaMoneda.cpp
// ==>Autor: Javier Lucas
// ==>Fecha de elaboración: 2022-04-02
// ==>Fecha última actualización: 2022-05-19
// ================================================ =
#include<iostream>
using namespace std;
int  main ()
{
	int LJ_n, LJ_d= 0 , LJ_d1= 0 , LJ_d2= 0 ;
	float LJ_x,LJ_e= 0 , LJ_e1= 0 , LJ_e2= 0 ;
	cout<< "Digite el valor de monedas a contar :" <<endl;
	cin>>LJ_n;
	do{
		cout<< " Valor de moneda (10,25): " ;
		cin>>LJ_x;
		LJ_d=LJ_d+ 1 ;
		LJ_e=LJ_e+LJ_x;
		if (LJ_x== 10 ){
			LJ_d1=LJ_d1+ 1 ;
			LJ_e1=LJ_e1+LJ_x;
		} else {
		LJ_d2=LJ_d2+ 1 ;
		LJ_e2=LJ_e2+LJ_x;
		}
		
		cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Contador de Monedas " <<endl;
cout<< " //==> Archivo : LucasJavier-CuentaMoneda.cpp " <<endl;
cout<< " //==>Autor: Javier Lucas " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-02 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-19 " <<endl;
cout<< " //============================================ ===== " <<endl;

} while (LJ_d<LJ_n);
	cout<< " Nos da como resultado: " <<endl;
	cout<< " El valor de monedas digitadas: " <<LJ_d<<endl;
	cout<< " El valor total del dinero sumado: " <<LJ_e<<endl;
	cout<< " El valor de monedas de 10 digitadas: " <<LJ_d1<<endl;
	cout<< " El valor total de monedas de 10: " <<LJ_e1<<endl;
	cout<< " El valor de monedas de 25 digitadas: " <<LJ_d2<<endl;
	cout<< " El valor total de monedas de 25: " <<LJ_e2<<endl;
	return 0 ;
}
