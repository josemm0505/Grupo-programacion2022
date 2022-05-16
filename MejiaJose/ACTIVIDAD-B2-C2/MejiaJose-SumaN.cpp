//================================================

//==> Nombre del programa: Suma de varios numeros

//==> Archivo : MejiaJose-SumaN.cpp
//==>Autor: Jose Mejia
//==>Fecha de elaboración: 2022-04-23
//==>Fecha ultima actualización: 2022-05-13
//=================================================


#include <iostream>
using namespace std;

int main ()
{
	int jm_i=0, jm_n;
	float jm_x, jm_s=0;
	cout<<"Ingrese la cantidad de numeros que desea sumar: "<<endl;
	cin>>jm_n;
	do {
		cout<<"Ingrese el valor del numero: "<<endl;
		cin>>jm_x;
		jm_i=jm_i+1; 
		jm_s=jm_s+jm_x;
	}while (jm_i<jm_n);

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de Varios numeros"<<endl;
cout<<"//==> Archivo : MejiaJose-SumaN.cpp"<<endl;
cout<<"//==>Autor: Jose Mejia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-23"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La cantidad de numeros ingresados es: "<<jm_n<<endl;
	cout<<"La suma total de los numeros es: "<<jm_s<<endl;
	return 0;
}
