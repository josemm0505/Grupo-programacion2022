//================================================

//==> Nombre del programa: Edad de una persona
//==> Archivo : LucasJavier-LaEdad.cpp
//==>Autor: Javier Lucas
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-19
//=================================================


#include <iostream>
using namespace std;
int main ()
{
	int LJ_dd, LJ_mm, LJ_jj, LJ_dd1, LJ_mm1, LJ_jj1, LJ_de, LJ_me, LJ_ye;
	cout<<"Digite la fecha actual usando formato dd/mm/yy: "<<endl;
	cin>>LJ_dd>>LJ_mm>>LJ_jj;
	cout<<"Digite su fecha de nacimiento usando formato dd/mm/yy: "<<endl;
	cin>>LJ_dd1>>LJ_mm1>>LJ_jj1;

	if (LJ_dd<LJ_dd1){
		LJ_dd=LJ_dd+30;
		LJ_mm=LJ_mm-1;
		LJ_de=LJ_dd-LJ_dd1;
	}
		else {
			LJ_de=LJ_dd-LJ_dd1;
		}
	if (LJ_mm<LJ_mm1){
		LJ_mm=LJ_mm+12;
		LJ_jj=LJ_jj-1;
		LJ_me=LJ_mm-LJ_mm1;
	}
		else {
			LJ_me=LJ_mm-LJ_mm1;
		}
	LJ_ye=LJ_jj-LJ_jj1;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad de una persona"<<endl;
cout<<"//==> Archivo : LucasJavier-LaEdad.cpp"<<endl;
cout<<"//==>Autor: Javier Lucas"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Usted tiene "<<LJ_ye<<" años, "<<LJ_me<<" meses "<<"y "<<LJ_de<<" dias."<<endl;
	return 0;
}														
