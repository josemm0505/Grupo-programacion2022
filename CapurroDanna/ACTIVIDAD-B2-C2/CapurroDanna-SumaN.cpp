// ================================================

// ==> Nombre del programa: Suma de varios numeros

// ==> Archivo : CapurroDanna-SumaN.cpp
// ==>Autor: Danna Capurro
// ==>Fecha de elaboración: 2022-04-23
// ==>Fecha última actualización: 2022-05-16
// ================================================ =

# include <iostream>
using namespace std ;

int main ()
{
	int Dc_c= 0 , Dc_n;
	float Dc_s= 0 , Dc_x;
	cout<< " Ingrese la cantidad de elementos a sumar: " <<endl;
	cin>>Dc_n;
        do{
		cout<< " Ingrese el valor del elemento " <<Dc_c+1<< " : " <<endl;  
		cin>>Dc_x;
		Dc_c=Dc_c+ 1 ;
		Dc_s=Dc_s+Dc_x;
	}while (Dc_c<Dc_n);

	cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Suma de Varios numeros " <<endl;
cout<< " //==> Archivo : CapurroDanna-SumaN.cpp " <<endl;
cout<< " //==>Autor: Danna Capurro " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-23 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-16 " <<endl;
cout<< " //============================================ ===== " <<endl;

	cout<< " La Cantidad de elementos ingresados?Es: " <<Dc_n<<endl;
	cout<< " La Suma de los elementos es: " <<Dc_s<<endl;
	return 0 ;
}
