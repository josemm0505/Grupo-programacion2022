//Programa para comparar dos numeros
int vc_compara()
{
	int flag1;
	float VC1,VC2;
	cout<<"\n //==> Programa para comprar dos numeros <==//\n "<<endl;
	cout<<"Ingrese VC1: "<<endl;
	cin>>VC1;
	cout<<"Ingrese VC2: "<<endl;
	cin>>VC2;

	if (VC1==VC2){
	cout<<"El valor de VC1 es igual a VC2"<<endl;
	}
	else if (VC1>VC2){
		cout<<"El valor de "<<VC1<<" es mayor que "<<VC2<<endl;
	}
	else{
		cout<<"El valor de  "<<VC2<<" es mayor que  "<<VC1<<endl;
	} 
	
cout<<"\n//======================================================="<<endl;
cout<<"//=====> Nombre del programa: Comparar dos numeros <====="<<endl;
cout<<"//==========> Archivo : ValenciaKevin-Compara.cpp <=========="<<endl;
cout<<"//================> Autor: Valencia Kevin <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa para sumar varios numeros
int vc_sumaN()
{
	int VC1=0, VC2, flag1;
	float VC4, VC3=0;
	cout<<"\n //==> Programa para sumar varios numeros <==//\n "<<endl;
	cout<<"Ingrese la cantidad de valores a sumar: "<<endl;
	cin>>VC2;
	do {
		cout<<"Ingrese el valor del numero: "<<endl;
		cin>>VC4;
		VC1=VC1+1; 
		VC3=VC3+VC4;
	}while (VC1<VC2);
	cout<<"La cantidad de numeros ingresados es: "<<VC2<<endl;
	cout<<"La suma total de los numeros es: "<<VC3<<endl;

cout<<"\n//======================================================="<<endl;
cout<<"//====> Nombre del programa: Suma de varios numeros <===="<<endl;
cout<<"//===========> Archivo : ValenciaKevin-SumaN.cpp <==========="<<endl;
cout<<"//================> Autor: Valencia Kevin <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}

//Programa PuntoVenta
int vc_puntoventa()
{
	int VC1=0, VC2, flag1;
	float VC3=0, VC4, VC5, VC6, VC7, VC8, VC9;
	cout<<"\n //==> Programa para conocer el Punto de Venta <==//\n "<<endl;
	cout<<"Ingrese la cantidad de productos que desea"<<endl;
	cin>>VC2;
	do{
		cout<<"Ingrese el valor de la compra "<<VC1+1<<endl;
		cin>>VC4;
		VC1=VC1+1;
		VC3=VC3+VC4;
	}while (VC1<VC2);
	cout<<"Ingrese el valor del descuento: "<<endl;
	cin>>VC5;
	cout<<"Valor de compra: "<<VC3<<endl;
	VC6=(VC3*VC5)/100;
	cout<<"Valor del descuento: "<<VC6<<endl;
	VC7=VC3-VC6;
	VC8=VC7*0.12;
	cout<<"Valor del IVA: "<<VC8<<endl;
	VC9=(VC1-VC6)+VC8;
	cout<<"Valor final: "<<VC9<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//========> Nombre del programa: Punto de Venta <========"<<endl;
cout<<"//=========> Archivo : ValenciaKevin-PuntoVenta.cpp <========"<<endl;
cout<<"//================> Autor: Valencia Kevin <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}

//Programa laedad
int vc_laedad()
{
	int vc_dd, vc_mm, vc_yy, vc_dd1, vc_mm1, vc_yy1, vc_da, vc_ma, vc_ya, flag1;
	cout<<"\n //==> Programa para saber la edad exacta de una persona <==//\n "<<endl;
	cout<<"Ingrese la fecha actual en el formato dd/mm/yy: "<<endl;
	cin>>vc_dd>>vc_mm>>vc_yy;
	cout<<"Ingrese su fecha de nacimiento en el formato dd/mm/yy: "<<endl;
	cin>>vc_dd1>>vc_mm1>>vc_yy1;
	if (vc_dd<vc_dd1){
		vc_dd=vc_dd+30;
		vc_mm=vc_mm-1;
		vc_da=vc_dd-vc_dd1;
	}
			else {
			vc_da=vc_dd-vc_dd1;
		}
	if (vc_mm<vc_mm1){
		vc_mm=vc_mm+12;
		vc_yy=vc_yy-1;
		vc_ma=vc_mm-vc_mm1;
	}
		else {
			vc_ma=vc_mm-vc_mm1;
		}
	vc_ya=vc_yy-vc_yy1;

	cout<<"Actualmente tienes "<<vc_ya<<" anios, "<<vc_ma<<" meses "<<"y "<<vc_da<<" dias."<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Edad de una persona <====="<<endl;
cout<<"//===========> Archivo : ValenciaKevin-laedad.cpp <=========="<<endl;
cout<<"//================> Autor: Valencia Kevin <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa CuentaMoneda
int vc_cuentamoneda()
{
	int vca, vcb= 0 , vcb1= 0 , vcb2= 0 ;
	float vcx, vcm= 0 , vcm1= 0 , vcm2= 0 ;
	cout<< "Ingreso la cantidad de monedas: " ;
	cin>>vca;
	do {
		cout<< " Ingrese el valor de la moneda (0.10,0.25): " ;
		cin>>vcx;
		vcb=vcb+ 1 ;
		vcm=vcm+vcx;
		if (vcx== 0.10 ){
			vcb1=vcb1+ 1 ;
			vcm1=vcm1+vcx;
		} else {
		vcb2=vcb2+ 1 ;
		vcm2=vcm2+vcx;
		}
	} while (vcb<vca);
	cout<< " Resultado: " <<endl;
	cout<< "El total de monedas es: " <<vcb<<endl;
	cout<< "El dinero total contado es: " <<vcm<<endl;
	cout<< " La suma de monedas de 0.10c ingresadas es: " <<vcb1<<endl;
	cout<< " Dinero en monedas de 0.10c: " <<vcm1<<endl;
	cout<< "Dinero en monedas de 0,25c: " <<vcb2<<endl;
	cout<< "El total de dinero en monedas de 0.25c es: " <<vcm2<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Contador de Monedas <====="<<endl;
cout<<"//========> Archivo : ValenciaKevin-CuentaMoneda.cpp <======="<<endl;
cout<<"//================> Autor: Valencia Kevin <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}

//Menu Principal
int vc_menu()
{
	int op,flag1;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE VALENCIA KEVIN**************"<<endl<<endl;
			cout<<"1.- COMPARA DOS NUMEROS \n";
			cout<<"2.- SUMA DE VARIOS NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					vc_compara();
					break;
				case 2:
					system("clear");
					vc_sumaN();
					break;
				case 3:
					system("clear");
					vc_puntoventa();
					break;
				case 4:
					system("clear");
					vc_laedad();
					break;
				case 5:
					system("clear");
					vc_cuentamoneda();
					break;
				}
				if(op!=0 && op>5){
				   cout << "\n Opcion no valida \n" <<  "Press Enter to continue\n";
				   flag1=cin.ignore().get();
				  }
				if(op==0){
					system("clear");
					cout<<"\n//======================================================="<<endl;
					cout<<"//===> e-mail de contacto: valenciakevin047@gmail.com <==="<<endl;
					cout<<"//================> Esmeraldas - Ecuador <==============="<<endl;
					cout<<"//======================================================="<<endl;
					cout<<"\n Presione (Enter) para volver: \n"<<endl;
				}
				  system("cd ..");
	}while(op!=0);

	return(0);
}

