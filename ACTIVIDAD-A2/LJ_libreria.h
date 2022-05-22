//Programa para comparar dos numeros
int LJ_Compara()
{
	int flag1;
	float LJ_J,LJ_k;
	cout<<"\n //==> Programa para comprar dos numeros <==//\n "<<endl;
	cout<<"Digite un valor: "<<endl;
	cin>>LJ_J;
	cout<<"Digite un valor: "<<endl;
	cin>>LJ_k;

	if (LJ_J==LJ_k){
	cout<<"Los dos valores son iguales"<<endl;
	}
	else if (LJ_J>LJ_k){
		cout<<"El valor "<<LJ_J<<" es mayor que "<<LJ_k<<endl;
	}
	else{
		cout<<"El valor "<<LJ_k<<" es mayor que  "<<LJ_J<<endl;
	} 
	
cout<<"\n//======================================================="<<endl;
cout<<"//=====> Nombre del programa: Comparar dos numeros <====="<<endl;
cout<<"//==========> Archivo : LucasJavier-Compara.cpp <=========="<<endl;
cout<<"//================> Autor: Javier Lucas <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-19 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa para sumar varios numeros
int LJ_SumaN()
{
	int LJ_c=0, LJ_n, flag1;
	float LJ_x, LJ_s=0;
	cout<<"\n //==> Programa para sumar varios numeros <==//\n "<<endl;
	cout<<"Digite el valor de numeros que desea sumar: "<<endl;
        cin>>LJ_n;
	do {
		cout<<"Digite el valor del numero: "<<endl;
		cin>>LJ_x;
		LJ_c=LJ_c+1; 
		LJ_s=LJ_s+LJ_x;
	}while (LJ_c<LJ_n);
	cout<<"La porcion de numeros digitados es: "<<LJ_n<<endl;
	cout<<"La suma total obtenida de los numeros es: "<<LJ_s<<endl;

cout<<"\n//======================================================="<<endl;
cout<<"//====> Nombre del programa: Suma de varios numeros <===="<<endl;
cout<<"//===========> Archivo : LucasJavier-SumaN.cpp <==========="<<endl;
cout<<"//================> Autor: Javier Lucas <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-19 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa PuntoVenta
int LJ_PuntoVenta()
{
	int LJ_a=0, LJ_b, flag1;
	float LJ_m=0, LJ_h, LJ_e, LJ_v, LJ_v1, LJ_iv, LJ_f;
	cout<<"\n //==> Programa para conocer el Punto de Venta <==//\n "<<endl;
	cout<<"Digite el valor de los productos a sumar"<<endl;
	cin>>LJ_b;
	do{
		cout<<"Digite el valor de su compra "<<LJ_c+1<<endl;
		cin>>LJ_h;
		LJ_a=LJ_a+1;
		LJ_m=LJ_m+LJ_h;
	}while (LJ_a<LJ_b);
	cout<<"Digite el valor del descuento que utilizara: "<<endl;
	cin>>LJ_e;
	cout<<"Valor bruto de compra: "<<LJ_m<<endl;
	LJ_v=(LJ_m*LJ_e)/100;
	cout<<"Valor del descuento: "<<LJ_v<<endl;
	LJ_v1=LJ_m-LJ_v;
	LJ_iv=LJ_v1*0.12;
	cout<<"Valor del IVA: "<<LJ_iv<<endl;
	LJ_f=(LJ_m-LJ_v)+LJ_iv;
	cout<<"Valor final: "<<LJ_f<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//========> Nombre del programa: Punto de Venta <========"<<endl;
cout<<"//=========> Archivo : LucasJavier-PuntoVenta.cpp <========"<<endl;
cout<<"//================> Autor: Javier Lucas <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-05-02 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-19 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}


//Programa LaEdad
int LJ_LaEdad()
{
	int LJ_dd, LJ_mm, LJ_jj, LJ_dd1, LJ_mm1, LJ_jj1, LJ_de, LJ_me, LJ_ye, flag1;
	cout<<"\n //==> Programa para saber la edad exacta de una persona <==//\n "<<endl;
	cout<<"Digite la fecha actual usando formato dd/mm/yy: "<<endl;
	cin>>LJ_dd>>LJ_mm>>LJ_jj;
	cout<<"Ingrese su fecha de nacimiento en el formato dd/mm/yy: "<<endl;
	cin>>LJ_dd1>>LJ_mm1>>LJ_jj1;
	if (LJ_dd<LJ_dd1){
		LJ_dd=LJ_dd+30;
		LJ_mm=LJ_mm-1;
		LJ_de=LJ_dd-LJ_dd1;
	}
	        else {
			LJ_de=LJ_dd-LJ_dd1;
		}
	if (LJ_mm<LJ_mm1){
		LJ_mm=LJ_mm+12;
		LJ_jj=LJ_jj-1;
		LJ_me=LJ_mm-LJ_mm1;
	}
		else {
			LJ_me=LJ_mm-LJ_mm1;
		}
	LJ_ye=LJ_jj-LJ_jj1;

	cout<<"Usted tiene "<<LJ_ye<<" años, "<<LJ_me<<" meses "<<"y "<<LJ_de<<" dias."<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Edad de una persona <====="<<endl;
cout<<"//===========> Archivo : LucasJavier-LaEdad.cpp <=========="<<endl;
cout<<"//================> Autor: Javier Lucas <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-05-02 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-19 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}


//Programa CuentaMoneda
int LJ_CuentaMoneda ()
{
        int LJ_n, LJ_d= 0 , LJ_d1= 0 , LJ_d2= 0 ;
	float LJ_x,LJ_e= 0 , LJ_e1= 0 , LJ_e2= 0 ;
	cout<< "Digite el valor de monedas a contar :" <<endl;
	cin>>LJ_n;
	do{
		cout<< " Valor de moneda (10,25): " ;
		cin>>LJ_x;
		LJ_d=LJ_d+ 1 ;
		LJ_e=LJ_e+LJ_x;
		if (LJ_x== 10 ){
			LJ_d1=LJ_d1+ 1 ;
			LJ_e1=LJ_e1+LJ_x;
		} else {
		LJ_d2=LJ_d2+ 1 ;
		LJ_e2=LJ_e2+LJ_x;
		}
        } while (LJ_d<LJ_n);
	cout<< " Nos da como resultado: " <<endl;
	cout<< " El valor de monedas digitadas: " <<LJ_d<<endl;
	cout<< " El valor total del dinero sumado: " <<LJ_e<<endl;
	cout<< " El valor de monedas de 10 digitadas: " <<LJ_d1<<endl;
	cout<< " El valor total de monedas de 10: " <<LJ_e1<<endl;
	cout<< " El valor de monedas de 25 digitadas: " <<LJ_d2<<endl;
	cout<< " El valor total de monedas de 25: " <<LJ_e2<<endl;
	return 0 ;
}

cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Contador de Monedas <====="<<endl;
cout<<"//========> Archivo : LucasJavier-CuentaMoneda.cpp <======="<<endl;
cout<<"//================> Autor: Javier Lucas <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-05-02 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-19 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}


//Menu Principal
int LJ_menu()
{
	int op,flag1;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE JAVIER LUCAS**************"<<endl<<endl;
			cout<<"1.- COMPARA DOS NUMEROS \n";
			cout<<"2.- SUMA DE VARIOS NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op sirve para la opcion a escoger
			switch(op){
				case 1:
					system("clear");
					LJ_Compara();
					break;
				case 2:
					system("clear");
					LJ_SumaN();
					break;
				case 3:
					system("clear");
					LJ_PuntoVenta();
					break;
				case 4:
					system("clear");
					LJ_LaEdad();
					break;
				case 5:
					system("clear");
					LJ_CuentaMoneda();
					break;
				}
				if(op!=0 && op>5){
				   cout << "\n Opcion no valida \n" <<  "Press Enter to continue\n";
				   flag1=cin.ignore().get();
				  }
				if(op==0){
					system("clear");
					cout<<"\n//======================================================="<<endl;
					cout<<"//===> e-mail de contacto: javierlucasangulo@gmail.com <==="<<endl;
					cout<<"//================> Esmeraldas - Ecuador <==============="<<endl;
					cout<<"//======================================================="<<endl;
					cout<<"\n Presione (Enter) para volver: \n"<<endl;
				}
				  system("cd ..");
	}while(op!=0);

	return(0);
}
