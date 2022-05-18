//================================================
//==> Nombre del programa: La edad
//==> Archivo : laedad.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================
#include <iostream>
using namespace std;
int main ()
{
	int vcdd, vcmm, vcyy, vcdd1,vcmm1, vcyy1, vcda, vcma, vcya;
	cout<<"Ingrese fecha actual de la siguiente manera vcdd/vcmm/vcyy: "<<endl;
	cin>>vcdd>>vcmm>>vcyy;
	cout<<"Ingrese fecha de nacimiento de la siguiente manera vcdd/vcmm/vcyy: "<<endl;
	cin>>vcdd1>>vcmm1>>vcyy1;
	if (vcdd<vcdd1){
		vcdd=vcdd+30;
		vcmm=vcmm-1;
		vcda=vcdd-vcdd1;
	}
		else {
			vcda=vcdd-vcdd1;
		}
	if (vcmm<vcmm1){
		vcmm=vcmm+12;
		vcyy=vcyy-1;
		vcma=vcmm-vcmm1;
	}
		else {
			vcma=vcmm-vcmm1;
		}
	vcya=vcyy-vcyy1;
	cout<<"Actualmente tienes "<<vcya<<" anios, "<<vcma<<" meses "<<"y "<<vcda<<" dias."<<endl;
	//================================================
//==> Nombre del programa: SumaN
//==> Archivo : suman.cpp
//==>Autor: Valencia Kevin
//==>Fecha de elaboración: 2022-01-10
//==>Fecha ultima actualización: 2022-05-18
//=================================================

	return 0;
}

