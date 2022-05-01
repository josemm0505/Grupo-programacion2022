#include <iostream>
using namespace std ;
int  main()
{
	int a, b, c, a1, b1, c1, d, q, eu, qq, qq1;
	cout<< " Ingresé la fecha de hoy " ;
	cin>>a>>b>>c;
	cout<< " Ingresé su fecha de nacimiento " ;
	cin>>a1>>b1>>c1;
	if (a<a1){
		a=a+30;
		b=b-1;
		d=a-a1;
	}
	else {
		d=a-a1;
	}
	if (b<b1){
		b=b+ 12;
		qq=qq- 1;
		q=b-b1;
	}
	else {
		q=b-b1;
	}
	eu=qq-qq1;
	cout<< " Su edad es : " <<eu<< " Años; " <<q<< " Meses " << " y " <<d<< " DIA " <<endl;
	return  0 ;
}
