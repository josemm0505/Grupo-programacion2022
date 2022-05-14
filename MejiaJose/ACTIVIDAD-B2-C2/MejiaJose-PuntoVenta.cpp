//================================================

//==> Nombre del programa: Punto de Venta

//==> Archivo : MejiaJose-PuntoVenta.cpp
//==>Autor: Jose Mejia
//==>Fecha de elaboración: 2022-04-29
//==>Fecha ultima actualización: 2022-05-13
//=================================================

#include <iostream>
using namespace std;
int main ()
{
	int jm_c=0, jm_n;
	float jm_s=0, jm_x, jm_d, jm_t, jm_t1, jm_iv, jm_f;
	cout<<"Ingrese la cantidad de productos que desea sumar"<<endl;
	cin>>jm_n;
	do{
		cout<<"Ingrese el valor de la compra "<<jm_c+1<<endl;
		cin>>jm_x;
		jm_c=jm_c+1;
		jm_s=jm_s+jm_x;
	}while (jm_c<jm_n);
	cout<<"Ingrese el valor del descuento que desea realizar: "<<endl;
	cin>>jm_d;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : MejiaJose-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Jose Mejia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Valor bruto de compra: "<<jm_s<<endl;
	jm_t=(jm_s*jm_d)/100;
	cout<<"Valor del descuento: "<<jm_t<<endl;
	jm_t1=jm_s-jm_t;
	jm_iv=jm_t1*0.12;
	cout<<"Valor del IVA: "<<jm_iv<<endl;
	jm_f=(jm_s-jm_t)+jm_iv;
	cout<<"Valor final: "<<jm_f<<endl;
return 0;
}
