//=============================================
//==> Nombre del programa: Punto de venta
//==> Archivo: IbarraEmiko-PuntoVenta.cpp
//==> Autora: Emiko Ibarra
//==> Fecha de elaboración: 20/05/2022
//==> Fecha de modificación: 20/05/2022
//=============================================
#include <iostream>
using namespace std;
int  main ()
{
	int ei_b=0 , ei_e;
	float ei_a=0 , ei_x, ei_t, ei_p, ei_pd, ei_IVA= 0.12 , ei_dsc=0.30 , ei_tt;
	cout<< " Ingresé cuántos elementos va a comprar: " ;
	cin>>ei_e;
	do {
		cout<< " Ingrese el valor: " ;
		cin>>ei_x;
		ei_b=ei_b+ 1;
		ei_a=ei_a+ei_x;
		ei_p=ei_a*ei_IVA;
		cout<< " El IVA de su compra es:$ " <<ei_p<<endl;
		ei_pd=ei_a*ei_dsc;
		cout<< " El descuento de su compra es:$ " <<ei_pd<<endl; 
		ei_t=ei_p+ei_pd;
	} while (ei_b<ei_e);
cout<<endl<<"//================================================"<<endl;
cout<<"//==>Nombre del programa: Punto de venta"<<endl;
cout<<"//==>Archivo: IbarraEmiko-PuntoVenta.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl; 
if (ei_t==ei_a){
		cout<< " Usted aplica a descuento: " <<ei_t<<endl;
		ei_IVA=ei_t*ei_p/ 100 ;
		ei_dsc=ei_t*ei_pd/ 100 ;
	} else {
		ei_tt=ei_a+ei_p-ei_pd;
		cout<< " Su total a pagar es:$ " <<ei_tt<<endl;
}
	return  0 ;
}
