//=============================================
//==> Nombre del programa: Suma de números
//==> Archivo: IbarraEmiko-SumaN.cpp
//==> Autora: Emiko Ibarra
//==> Fecha de elaboración: 20/05/2022
//==> Fecha de modificación: 20/05/2022
//=============================================
#include <iostream>
using namespace std;

int main ()
{
	int ei_b=0, ei_a;
	float ei_d, ei_c=0;
	cout<<"Ingrese cuántos números va a sumar: "<<endl;
	cin>>ei_a;
	do {
		cout<<"Ingrese el número: "<<endl;
		cin>>ei_d;
		ei_b=ei_b+1; 
		ei_c=ei_c+ei_d;
	}while (ei_b<ei_a);

cout<<endl<<"//=============================================<<"<<endl;
cout<<"//==>Nombre del programa: Suma de números"<<endl;
cout<<"//==>Archivo: IbarraEmiko-SumaN.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
	cout<<"Los números ingresados son: "<<ei_a<<endl;
	cout<<"La suma total es: "<<ei_c<<endl;
	return 0;
}
