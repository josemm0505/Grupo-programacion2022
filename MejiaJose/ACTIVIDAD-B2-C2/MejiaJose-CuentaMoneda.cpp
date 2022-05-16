//================================================

//==> Nombre del programa: Contador de Monedas
//==> Archivo : MejiaJose-CuentaMoneda.cpp
//==>Autor: Jose Mejia
//==>Fecha de elaboración: 2022-04-29
//==>Fecha ultima actualización: 2022-05-13
//=================================================

#include <iostream>
using namespace std;
int main ()
{
	int jm_n, jm_i, jm_sum=0, jm_sum1=0, jm_sum25=0, jm_sum50=0;
	cout<<"Ingrese la cantidad de monedas que desea depositar: "<<endl;
	cin>>jm_n;
	int num [jm_n];
	cout<<"Ingrese el valor de las monedas: "<<endl;
	for (int jm_i=0; jm_i<jm_n; jm_i++){
		cin>>num [jm_i];
		jm_sum=jm_sum+num [jm_i];
		if (num [jm_i]==10){
			jm_sum1=jm_sum1+(num[jm_i]==10);	
	}
		else if (num [jm_i]==25){
			jm_sum25=jm_sum25+(num[jm_i]==25);
	}
		else {
			jm_sum50=jm_sum50+(num[jm_i]==50);
	}

}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Contador de Monedas"<<endl;
cout<<"//==> Archivo : MejiaJose-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Jose Mejia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Monedas de 50 centavos: "<<jm_sum50<<endl;
	cout<<"Monedas de 25 centavos: "<<jm_sum25<<endl;
	cout<<"Monedas de 10 centavos: "<<jm_sum1<<endl;
	cout<<"La cantidad total de dinero es: "<<jm_sum<<endl;
return 0;
}
