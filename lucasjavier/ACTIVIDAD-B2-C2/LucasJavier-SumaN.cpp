//================================================

//==> Nombre del programa: Suma de varios numeros

//==> Archivo : LucasJavier-SumaN.cpp
//==>Autor: Javier Lucas
//==>Fecha de elaboración: 2022-04-23
//==>Fecha ultima actualización: 2022-05-19
//=================================================


#include <iostream>
using namespace std;

int main ()
{
	int LJ_c=0, LJ_n;
	float LJ_x, LJ_s=0;
	cout<<"Digite el valor de numeros que desea sumar: "<<endl;
	cin>>LJ_n;
	do {
		cout<<"Digite el valor del numero: "<<endl;
		cin>>LJ_x;
		LJ_c=LJ_c+1; 
		LJ_s=LJ_s+LJ_x;
	}while (LJ_c<LJ_n);

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de Varios numeros"<<endl;
cout<<"//==> Archivo : LucasJavier-SumaN.cpp"<<endl;
cout<<"//==>Autor: Javier Lucas"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-23"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La porcion de numeros digitados es: "<<LJ_n<<endl;
	cout<<"La suma total obtenida de los numeros es: "<<LJ_s<<endl;
	return 0;
}
