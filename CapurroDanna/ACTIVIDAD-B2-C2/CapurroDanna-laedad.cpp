// ================================================

// ==> Nombre del programa: Edad de una persona

// ==> Archivo : CapurroDanna-laedad.cpp
// ==>Autor: Danna Capurro
// ==>Fecha de elaboración: 2022-04-29
// ==>Fecha última actualización: 2022-05-17
// ================================================ =

# include<iostream>
using namespace std ;
int main  ()
{
	int Dc_dd,Dc_mm,Dc_aa,Dc_dd1,Dc_mm1,Dc_aa1,Dc_yy1,Dc_da,Dc_ma,Dc_yy,Dc_ya;
	cout<< " INGRESE LA FECHA ACTUAL: Dia Mes AñO " ;
	cin>>Dc_dd>>Dc_mm>>Dc_aa;
	cout<< " INGRESE SU FECHA DE NACIMIENTO: Dia Mes Año " ;
	cin>>Dc_dd1>>Dc_mm1>>Dc_yy1 ;
	if (Dc_dd<Dc_dd1){
		Dc_dd=Dc_dd+ 30 ;
		Dc_mm=Dc_mm- 1 ;
		Dc_da=Dc_dd-Dc_dd1;
	}
	   else {
		Dc_da=Dc_dd-Dc_dd1;
     	}
	if (Dc_mm<Dc_mm1){
		Dc_mm=Dc_mm+ 12 ;
		Dc_yy=Dc_yy- 1 ;
		Dc_ma=Dc_mm-Dc_mm1;
	}
	else {
		Dc_ma=Dc_mm-Dc_mm1;
	}
	Dc_ya=Dc_yy-Dc_yy1;
	
	cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Edad de una persona " <<endl;
cout<< " //==> Archivo : CapurroDanna-laedad.cpp " <<endl;
cout<< " //==>Autor: Danna Capurro" <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-17 " <<endl;
cout<< " //============================================ ===== " <<endl;

	cout<< " USTED TIENE: " <<Dc_ya<< " Años; " <<Dc_ma<< " Meses " << " y " <<Dc_da<< " Dia " <<endl;
	return 0 ;
}
