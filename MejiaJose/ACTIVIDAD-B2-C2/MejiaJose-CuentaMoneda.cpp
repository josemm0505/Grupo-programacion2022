#include <iostream>
using namespace std;
int main ()
{
	int n, i, sum=0, sum1=0, sum25=0, sum50=0;
	cout<<"Ingrese la cantidad de monedas que desea depositar: "<<endl;
	cin>>n;
	int num [n];
	cout<<"Ingrese el valor de las monedas: "<<endl;
	for (int i=0; i<n; i++){
		cin>>num [i];
		sum=sum+num [i];
		if (num [i]==10){
			sum1=sum1+(num[i]==10);	
	}
		else if (num [i]==25){
			sum25=sum25+(num[i]==25);
	}
		else {
			sum50=sum50+(num[i]==50);
	}
}
	cout<<"Monedas de 50 centavos: "<<sum50<<endl;
	cout<<"Monedas de 25 centavos: "<<sum25<<endl;
	cout<<"Monedas de 10 centavos: "<<sum1<<endl;
	cout<<"La cantidad total de dinero es: "<<sum<<endl;
return 0;
}
