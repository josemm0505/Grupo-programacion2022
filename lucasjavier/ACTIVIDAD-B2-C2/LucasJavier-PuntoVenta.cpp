//================================================

//==> Nombre del programa: Punto de Venta
//==> Archivo : LucasJavier-PuntoVenta.cpp
//==>Autor: Javier Lucas
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include <iostream>
using namespace std;
int main ()
{
	int LJ_a=0, LJ_b;
	float LJ_m=0, LJ_h, LJ_e, LJ_v, LJ_v1, LJ_iv, LJ_f;
	cout<<"Digite el valor de los producto a sumar"<<endl;
	cin>>LJ_b;
	do{
		cout<<"Digite el valor de su compra "<<LJ_a+1<<endl;
		cin>>LJ_h;
		LJ_a=LJ_a+1;
		LJ_m=LJ_m+LJ_h;
	}while (LJ_a<LJ_b);
	cout<<"Digite el valor del descuento que utilizara: "<<endl;
	cin>>LJ_e;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : LucasJavier-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Javier Lucas"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Valor bruto de compra: "<<LJ_m<<endl;
	LJ_v=(LJ_m*LJ_e)/100;
	cout<<"Valor del descuento: "<<LJ_v<<endl;
	LJ_v1=LJ_m-LJ_v;
	LJ_iv=LJ_v1*0.12;
	cout<<"Valor del IVA: "<<LJ_iv<<endl;
	LJ_f=(LJ_m-LJ_v)+LJ_iv;
	cout<<"Valor final: "<<LJ_f<<endl;
return 0;
}
