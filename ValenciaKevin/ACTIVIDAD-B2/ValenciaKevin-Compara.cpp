#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Ingrese a: "<<endl;
	cin>>a;
	cout<<"Ingrese b: "<<endl;
	cin>>b;
	if (a==b){
	cout<<"El valor de a es igual a b"<<endl;
	}
	else if (a>b){
		cout<<"El valor "<<a<<" es mayor que "<<b<<endl;
	}
	else{
		cout<<"El valor "<<b<<" es mayor "<<a<<endl;
	} 
	return 0;
}
