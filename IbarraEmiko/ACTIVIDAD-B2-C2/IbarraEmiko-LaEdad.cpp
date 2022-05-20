//=============================================
//==> Nombre del programa: Sacar la edad
//==> Archivo: IbarraEmiko-LaEdad.cpp
//==> Autora: Emiko Ibarra
//==> Fecha de elaboración: 20/05/2022
//==> Fecha de modificación: 20/05/2022
//=============================================
#include <iostream>
using namespace std ;
int  main()
{
	int ei_a, ei_b, ei_c, ei_a1, ei_b1, ei_c1, ei_d, ei_q, ei_eu, ei_qq, ei_qq1;
	cout<< " Ingresé la fecha de hoy " ;
	cin>>ei_a>>ei_b>>ei_c;
	cout<< " Ingresé su fecha de nacimiento " ;
	cin>>ei_a1>>ei_b1>>ei_c1;
	if (ei_a<ei_a1){
		ei_a=ei_a+30;
		ei_b=ei_b-1;
		ei_d=ei_a-ei_a1;
	}
	else {
		ei_d=ei_a-ei_a1;
	}
	if (ei_b<ei_b1){
		ei_b=ei_b+ 12;
		ei_qq=ei_qq- 1;
		ei_q=ei_b-ei_b1;
	}
	else {
		ei_q=ei_b-ei_b1;
	}
	ei_eu=ei_qq-ei_qq1;
	cout<< " Su edad es : " <<ei_eu<< " Años; " <<ei_q<< " Meses " << " y " <<ei_d<< " DIA " <<endl;
cout<<endl<<"============================================="<<endl;
cout<<"//==>Nombre del programa: Sacar la edad "<<endl;
cout<<"//==>Archivo: IbarraEmiko-LaEdad.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================="<<endl;
	return  0 ;
}
