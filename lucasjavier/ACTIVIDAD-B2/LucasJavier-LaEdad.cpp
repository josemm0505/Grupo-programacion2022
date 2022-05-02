#include <iostream>
using namespace std;
int main ()
{
	int d, e, f, d1, e1, f1, g, h, eu, m, a;
	cout<<"Escribir la fecha actual usando d/m/a: "<<endl;
	cin>>d>>e>>f;
	cout<<"Escribir su fecha de nacimiento usando d/m/a: "<<endl;
	cin>>d1>>e1>>f1;
	if (d<d1){
		d=d+30;
		e=e-1;
		g=d-d1;
	}
		else {
			g=d-d1;
		}
	if (e<e1){
		e=e+12;
		h=h-1;
		h=e-e1;
	}
		else {
			h=e-e1;
		}
	eu=f-f1;
	cout<<"Usted tiene "<<eu<<" años, "<<h<<" meses "<<"y "<<g<<" dias."<<endl;
	return 0;
}
