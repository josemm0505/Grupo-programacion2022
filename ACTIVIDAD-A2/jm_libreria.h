//Programa para comparar dos numeros
int jm_compara()
{
	int flag1;
	float jm_num1,jm_num2;
	cout<<"\n //==> Programa para comprar dos numeros <==//\n "<<endl;
	cout<<"Ingrese una cantidad: "<<endl;
	cin>>jm_num1;
	cout<<"Ingrese una cantidad: "<<endl;
	cin>>jm_num2;

	if (jm_num1==jm_num2){
	cout<<"Ambas cantidades son iguales"<<endl;
	}
	else if (jm_num1>jm_num2){
		cout<<"El numero "<<jm_num1<<" es mayor que "<<jm_num2<<endl;
	}
	else{
		cout<<"El numero "<<jm_num2<<" es mayor que  "<<jm_num1<<endl;
	} 
	
cout<<"\n//======================================================="<<endl;
cout<<"//=====> Nombre del programa: Comparar dos numeros <====="<<endl;
cout<<"//==========> Archivo : MejiaJose-Compara.cpp <=========="<<endl;
cout<<"//================> Autor: Jose Mejia <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa para sumar varios numeros
int jm_sumaN()
{
	int jm_i=0, jm_n, flag1;
	float jm_x, jm_s=0;
	cout<<"\n //==> Programa para sumar varios numeros <==//\n "<<endl;
	cout<<"Ingrese la cantidad de numeros que desea sumar: "<<endl;
	cin>>jm_n;
	do {
		cout<<"Ingrese el valor del numero: "<<endl;
		cin>>jm_x;
		jm_i=jm_i+1; 
		jm_s=jm_s+jm_x;
	}while (jm_i<jm_n);
	cout<<"La cantidad de numeros ingresados es: "<<jm_n<<endl;
	cout<<"La suma total de los numeros es: "<<jm_s<<endl;

cout<<"\n//======================================================="<<endl;
cout<<"//====> Nombre del programa: Suma de varios numeros <===="<<endl;
cout<<"//===========> Archivo : MejiaJose-SumaN.cpp <==========="<<endl;
cout<<"//================> Autor: Jose Mejia <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}

//Programa PuntoVenta
int jm_puntoventa()
{
	int jm_c=0, jm_n, flag1;
	float jm_s=0, jm_x, jm_d, jm_t, jm_t1, jm_iv, jm_f;
	cout<<"\n //==> Programa para conocer el Punto de Venta <==//\n "<<endl;
	cout<<"Ingrese la cantidad de productos que desea sumar"<<endl;
	cin>>jm_n;
	do{
		cout<<"Ingrese el valor de la compra "<<jm_c+1<<endl;
		cin>>jm_x;
		jm_c=jm_c+1;
		jm_s=jm_s+jm_x;
	}while (jm_c<jm_n);
	cout<<"Ingrese el valor del descuento que desea realizar: "<<endl;
	cin>>jm_d;
	cout<<"Valor bruto de compra: "<<jm_s<<endl;
	jm_t=(jm_s*jm_d)/100;
	cout<<"Valor del descuento: "<<jm_t<<endl;
	jm_t1=jm_s-jm_t;
	jm_iv=jm_t1*0.12;
	cout<<"Valor del IVA: "<<jm_iv<<endl;
	jm_f=(jm_s-jm_t)+jm_iv;
	cout<<"Valor final: "<<jm_f<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//========> Nombre del programa: Punto de Venta <========"<<endl;
cout<<"//=========> Archivo : MejiaJose-PuntoVenta.cpp <========"<<endl;
cout<<"//================> Autor: Jose Mejia <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}

//Programa laedad
int jm_laedad()
{
	int jm_dd, jm_mm, jm_yy, jm_dd1, jm_mm1, jm_yy1, jm_da, jm_ma, jm_ya, flag1;
	cout<<"\n //==> Programa para saber la edad exacta de una persona <==//\n "<<endl;
	cout<<"Ingrese la fecha actual en el formato dd/mm/yy: "<<endl;
	cin>>jm_dd>>jm_mm>>jm_yy;
	cout<<"Ingrese su fecha de nacimiento en el formato dd/mm/yy: "<<endl;
	cin>>jm_dd1>>jm_mm1>>jm_yy1;
	if (jm_dd<jm_dd1){
		jm_dd=jm_dd+30;
		jm_mm=jm_mm-1;
		jm_da=jm_dd-jm_dd1;
	}
		else {
			jm_da=jm_dd-jm_dd1;
		}
	if (jm_mm<jm_mm1){
		jm_mm=jm_mm+12;
		jm_yy=jm_yy-1;
		jm_ma=jm_mm-jm_mm1;
	}
		else {
			jm_ma=jm_mm-jm_mm1;
		}
	jm_ya=jm_yy-jm_yy1;

	cout<<"Usted tiene "<<jm_ya<<" anios, "<<jm_ma<<" meses "<<"y "<<jm_da<<" dias."<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Edad de una persona <====="<<endl;
cout<<"//===========> Archivo : MejiaJose-laedad.cpp <=========="<<endl;
cout<<"//================> Autor: Jose Mejia <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa CuentaMoneda
int jm_cuentamoneda()
{
	int jm_n, jm_i, jm_sum=0, jm_sum1=0, jm_sum25=0, jm_sum50=0, flag1;
	cout<<"\n //==> Programa para contar y clasificar monedas <==//\n "<<endl;
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

	cout<<"Monedas de 50 centavos: "<<jm_sum50<<endl;
	cout<<"Monedas de 25 centavos: "<<jm_sum25<<endl;
	cout<<"Monedas de 10 centavos: "<<jm_sum1<<endl;
	cout<<"La cantidad total de dinero es: "<<jm_sum<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Contador de Monedas <====="<<endl;
cout<<"//========> Archivo : MejiaJose-CuentaMoneda.cpp <======="<<endl;
cout<<"//================> Autor: Jose Mejia <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}

//Menu Principal
int jm_menu()
{
	int op,flag1;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE MEJIA JOSE**************"<<endl<<endl;
			cout<<"1.- COMPARA DOS NUMEROS \n";
			cout<<"2.- SUMA DE VARIOS NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					jm_compara();			
					break;
				case 2:
					system("clear");
					jm_sumaN();
					break;
				case 3:
					system("clear");
					jm_puntoventa();
					break;
				case 4:
					system("clear");
					jm_laedad();
					break;
				case 5:
					system("clear");
					jm_cuentamoneda();
					break;
				}
				if(op!=0 && op>5){
				   cout << "\n Opcion no valida \n" <<  "Press Enter to continue\n";
				   flag1=cin.ignore().get();
				  }		  
				if(op==0){
					system("clear");
					cout<<"\n//======================================================="<<endl;
					cout<<"//===> e-mail de contacto: mejiamicoltalol@gmail.com <==="<<endl;
					cout<<"//================> Esmeraldas - Ecuador <==============="<<endl;
					cout<<"//======================================================="<<endl;
					cout<<"\n Presione (Enter) para volver: \n"<<endl;
				}
				  system("cd ..");
	}while(op!=0);

	return(0);
}

