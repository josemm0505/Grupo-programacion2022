// ================================================

// ==> Nombre del programa: Punto de Venta

// ==> Archivo : CapurroDanna-PuntoVenta.cpp
// ==>Autor: Danna Capurro
// ==>Fecha de elaboración: 2022-04-29
// ==>Fecha última actualización: 2022-05-16
// ================================================ =


# include <iostream>
using namespace std ;
int  main ()
{
	int Dc_C= 0 ,Dc_B;
	float Dc_A= 0 ,Dc_x,Dc_Tb,Dc_PIVA,Dc_Pdsc,Dc_IVA= 0.12 ,Dc_dsc= 0.30 ,Dc_VT;
	cout<< " Ingrese Cantidad de elementos a comprar: " <<endl;
	cin>>Dc_B;
	do{
		cout<< " Ingrese el valor del elemento: " <<Dc_C+1 <<endl;
		cin>>Dc_x;
		Dc_C=Dc_C+ 1 ;
		Dc_A=Dc_A+Dc_x;
		Dc_PIVA=Dc_A*Dc_IVA;
		cout<< " El valor del IVA de su compra es:$ " <<Dc_PIVA<<endl;
		Dc_Pdsc=Dc_A*Dc_dsc;
		cout<< " El valor del descuento de su compra es:$ " <<Dc_Pdsc<<endl;
		Dc_Tb=Dc_PIVA+Dc_Pdsc;
	} while (Dc_C<Dc_B);
	if (Dc_Tb==Dc_A){
		
		
		cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Punto de Venta " <<endl;
cout<< " //==> Archivo : CapurroDanna-PuntoVenta.cpp " <<endl;
cout<< " //==>Autor: Danna Capurro " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-16 " <<endl;
cout<< " //============================================ ===== " <<endl;

cout<< " Su compra aplica a Descuento: " <<Dc_Tb<<endl;
		Dc_IVA=Dc_Tb*Dc_PIVA/ 100 ;
		Dc_dsc=Dc_Tb*Dc_Pdsc/ 100 ;
	} else {
		Dc_VT=Dc_A+Dc_PIVA-Dc_Pdsc;
		cout<< " El valor total a pagar es:$ " <<Dc_VT<<endl;
	
	}
	return  0 ;
}
