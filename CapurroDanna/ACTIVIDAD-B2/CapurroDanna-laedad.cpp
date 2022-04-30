#include<iostream>
using namespace std;
int main()
{
	int
	dd,mm,yy,dd1,mm1,yy1,da,ma,ya;
	cout<<"INGRESE LA FECHA ACTUAL: DIA MES AÑO ";
	cin>>dd>>mm>>yy;
	cout<<"INGRESE SU FECHA DE NACIMIENTO: DIA MES AÑO ";
	cin>>dd1>>mm1>>yy1;
	if (dd<dd1){
		dd=dd+30;
		mm=mm-1;
		da=dd-dd1;
	}
	else{
		da=dd-dd1;
	}
	if(mm<mm1){
		mm=mm+12;
		yy=yy-1;
		ma=mm-mm1;
	}
	else{
		ma=mm-mm1;
	}
	ya=yy-yy1;
	cout<<"USTED TIENE: "<<ya<< " AÑOS; " <<ma<< " MESES " << " y "<<da<< " DIA " <<endl;
	return 0;
}
