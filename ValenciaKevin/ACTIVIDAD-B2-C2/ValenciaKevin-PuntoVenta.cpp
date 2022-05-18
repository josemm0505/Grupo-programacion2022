//================================================
//==> Nombre del programa: Punto Venta
//==> Archivo : PuntoVenta.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include <iostream>
using namespace std;
int main ()
{
	int VC1=0, VC2;
	float VC3=0, VC4, VC5, VC6, VC7, VC8, VC9;
	cout<<"Ingrese los  productos que desea "<<endl;
	cin>>VC2;
	do{
		cout<<"Ingrese valor de compra "<<VC1+1<<endl;
		cin>>VC4;
		VC1=VC1+1;
		VC3=VC3+VC4;
	}while (VC1<VC2);
	cout<<"Ingrese valor del descuento: "<<endl;
	cin>>VC5;
	cout<<"Valor  de compra: "<<VC3<<endl;
	VC6=(VC3*VC5)/100;
	cout<<"Valor del descuento: "<<VC6<<endl;
	VC7=VC3-VC6;
	VC8=VC7*0.12;
	cout<<"Valor de VC8: "<<VC8<<endl;
	VC9=(VC1-VC6)+VC8;
	cout<<"Valor final: "<<VC9<<endl;
	//================================================
//==> Nombre del programa: SumaN
//==> Archivo : suman.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================

return 0;
}

