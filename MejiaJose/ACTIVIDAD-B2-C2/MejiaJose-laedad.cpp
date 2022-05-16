//================================================

//==> Nombre del programa: Edad de una persona

//==> Archivo : MejiaJose-laedad.cpp
//==>Autor: Jose Mejia
//==>Fecha de elaboración: 2022-04-29
//==>Fecha ultima actualización: 2022-05-13
//=================================================


#include <iostream>
using namespace std;
int main ()
{
	int jm_dd, jm_mm, jm_yy, jm_dd1, jm_mm1, jm_yy1, jm_da, jm_ma, jm_ya;
	cout<<"Ingrese la fecha actual en el formato dd/mm/yy: "<<endl;
	cin>>jm_dd>>jm_mm>>jm_yy;
	cout<<"Ingrese su fecha de nacimiento en el formato dd/mm/yy: "<<endl;
	cin>>jm_dd1>>jm_mm1>>jm_yy1;
	if (jm_dd<jm_dd1){
		jm_dd=jm_dd+30;
		jm_mm=jm_mm-1;
		jm_da=jm_dd-jm_dd1;
	}
		else {
			jm_da=jm_dd-jm_dd1;
		}
	if (jm_mm<jm_mm1){
		jm_mm=jm_mm+12;
		jm_yy=jm_yy-1;
		jm_ma=jm_mm-jm_mm1;
	}
		else {
			jm_ma=jm_mm-jm_mm1;
		}
	jm_ya=jm_yy-jm_yy1;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad de una persona"<<endl;
cout<<"//==> Archivo : MejiaJose-laedad.cpp"<<endl;
cout<<"//==>Autor: Jose Mejia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Usted tiene "<<jm_ya<<" anios, "<<jm_ma<<" meses "<<"y "<<jm_da<<" dias."<<endl;
	return 0;
}
