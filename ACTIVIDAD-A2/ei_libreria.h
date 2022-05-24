//Programa para comparar dos numeros
int ei_compara()
{	
int flag1;
float ei_a, ei_b;
	cout<<"Ingrese un número: "<<endl;
	cin>>ei_a;
	cout<<"Ingrese otro numero: "<<endl;
	cin>>ei_b;
	if (ei_a==ei_b){
	cout<<"Los números son iguales"<<endl;
	}
	else if (ei_a>ei_b){
		cout<<"El numero "<<ei_a<<" es mayor que "<<ei_b<<endl;
	}
	else{
		cout<<"El numero "<<ei_b<<" es mayor "<<ei_a<<endl;
	} 
cout<<endl<<"//
//============================================= <<endl;
cout<<"//==>Nombre del programa: Comparar dos números "<<endl;
cout<<"//==>Archivo: IbarraEmiko-Compara.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
flag1=cin.ignore().get();
return 0;
}
//Programa para sumar varios numeros
int ei_sumaN()
{
	int ei_b=0, ei_a;
	float ei_d, ei_c=0;
	cout<<"Ingrese cuántos números va a sumar: "<<endl;
	cin>>ei_a;
	do {
		cout<<"Ingrese el número: "<<endl;
		cin>>ei_d;
		ei_b=ei_b+1; 
		ei_c=ei_c+ei_d;
	}while (ei_b<ei_a);
	cout<<"Los números ingresados son: "<<ei_a<<endl;
	cout<<"La suma total es: "<<ei_c<<endl;
============================================= <<endl;
cout<<"//==>Nombre del programa: Suma de números "<<endl;
cout<<"//==>Archivo: IbarraEmiko-SumaN.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}
//Programa PuntoVenta
int ei_puntoventa()
{
	int ei_b=0 , ei_e;
	float ei_a=0 , ei_x, ei_t, ei_p, ei_pd, IVA= 0.12 , dsc=0.30 , ei_tt;
	cout<< " Ingresé cuántos elementos va a comprar: " ;
	cin>>ei_e;
	do {
		cout<< " Ingrese el valor: " ;
		cin>>ei_x;
		ei_b=ei_b+ 1;
		ei_a=ei_a+ei_x;
		ei_p=ei_a*IVA;
		cout<< " El IVA de su compra es:$ " <<ei_p<<endl;
		ei_pd=ei_a*dsc;
		cout<< " El descuento de su compra es:$ " <<ei_pd<<endl; 
		ei_t=ei_p+ei_pd;
	} while (ei_b<ei_e);
if (ei_t==ei_a){
		cout<< " Usted aplica a descuento: " <<ei_t<<endl;
		IVA=ei_t*ei_p/ 100 ;
		dsc=ei_t*ei_pd/ 100 ;
	} else {
		ei_tt=ei_a+ei_p-ei_pd;
		cout<< " Su total a pagar es:$ " <<ei_tt<<endl;
}
============================================= <<endl;
cout<<"//==>Nombre del programa: Punto de venta"<<endl;
cout<<"//==>Archivo: IbarraEmiko-PuntoVenta.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl; 
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return  0 ;
}
//Programa laedad
int ei_laedad()
{
	int ei_a, ei_b, ei_c, ei_a1, ei_b1, ei_c1, ei_d, ei_q, ei_eu, ei_qq, ei_qq1;
	cout<< " Ingresé la fecha de hoy " ;
	cin>>ei_a>>ei_b>>ei_c;
	cout<< " Ingresé su fecha de nacimiento " ;
	cin>>ei_a1>>ei_b1>>ei_c1;
	if (ei_a<ei_a1){
		ei_a=ei_a+30;
		ei_b=ei_b-1;
		ei_d=ei_a-ei_a1;
	}
	else {
		ei_d=ei_a-ei_a1;
	}
	if (ei_b<ei_b1){
		ei_b=ei_b+ 12;
		ei_qq=ei_qq- 1;
		ei_q=ei_b-ei_b1;
	}
	else {
		ei_q=ei_b-ei_b1;
	}
	ei_eu=ei_qq-ei_qq1;
	cout<< " Su edad es : " <<ei_eu<< " Años; " <<ei_q<< " Meses " << " y " <<ei_d<< " DIA " <<endl;
============================================= <<endl;
cout<<"//==>Nombre del programa: Sacar la edad "<<endl;
cout<<"//==>Archivo: IbarraEmiko-LaEdad.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return  0 ;
}
//Programa CuentaMoneda
int ei_cuentamoneda()
{
	int ei_a, ei_b= 0 , ei_b1= 0 , ei_b2= 0 ;
	float ei_x, ei_m= 0 , ei_m1= 0 , ei_m2= 0 ;
	cout<< "Ingreso de la cantidad de monedas: " ;
	cin>>ei_a;
	do {
		cout<< " Ingrese el valor de las monedas (0.10,0.25): " ;
		cin>>ei_x;
		ei_b=ei_b+ 1 ;
		ei_m=ei_m+ei_x;
		if (ei_x== 0.10 ){
			ei_b1=ei_b1+ 1 ;
			ei_m1=ei_m1+ei_x;
		} else {
		ei_b2=ei_b2+ 1 ;
		ei_m2=ei_m2+ei_x;
		}
	} while (ei_b<ei_a);
	cout<< " Resultado: " <<endl;
	cout<< "La cantidad de monedas ingresadas es: " <<ei_b<<endl;
	cout<< "El total de dinero contado es: " <<ei_m<<endl;
	cout<< " La cantidad de monedas de 0.10c ingresadas es: " <<ei_b1<<endl;
	cout<< " Total de dinero en monedas de 0.10c: " <<ei_m1<<endl;
	cout<< "Cantidad de monedas de 0,25c ingresadas: " <<ei_b2<<endl;
	cout<< "La cantidad de dinero en monedas de 0.25c es: " <<ei_m2<<endl;
============================================= <<endl;
cout<<"//==>Nombre del programa: Sacar cuentas de monedas"<<endl;
cout<<"//==>Archivo: IbarraEmiko-CuentaMoneda.cpp "<<endl;
cout<<"//==>Autora: Emiko Ibarra "<<endl;
cout<<"//==>Fecha de elaboración: 20/05/2022 "<<endl;
cout<<"//==>Fecha de modificación: 20/05/2022 "<<endl;
cout<<"//============================================= "<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return  0 ;
}
//Menu Principal
int ei_menu()
{
	int op,flag1;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE IBARRA EMIKO**************"<<endl<<endl;
			cout<<"1.- COMPARAR DOS NUMEROS \n";
			cout<<"2.- SUMA DE  NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					ei_compara();			
					break;
				case 2:
					system("clear");
					ei_sumaN();
					break;
				case 3:
					system("clear");
					ei_puntoventa();
					break;
				case 4:
					system("clear");
					ei_laedad();
					break;
				case 5:
					system("clear");
					ei_cuentamoneda();
					break;
				}
				if(op!=0 && op>5){
				   cout << "\n Opcion no valida \n" <<  "Press Enter to continue\n";
				   flag1=cin.ignore().get();
				  }		  
				if(op==0){
					system("clear");
					cout<<"\n//======================================================="<<endl;
					cout<<"//===> e-mail de contacto: emiherre1@gmail.com <==="<<endl;
					cout<<"//================> Esmeraldas - Ecuador <==============="<<endl;
					cout<<"//======================================================="<<endl;
					cout<<"\n Presione (Enter) para volver: \n"<<endl;
				}
				  system("cd ..");
	}while(op!=0);
return(0);
}



