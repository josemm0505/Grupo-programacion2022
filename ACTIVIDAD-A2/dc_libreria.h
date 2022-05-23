// Programa para comparar dos numeros
int Dc_Compara ()
{
	
	float Dc_valor1, Dc_valor2, flag1;
	cout<< " \n //==> Programa para comprar dos numeros <==// \n  " <<endl;
	cout<< " Ingrese un valor: " <<endl;
	cin>>Dc_valor1;
	cout<< " Ingrese un valor: " <<endl;
	cin>>Dc_valor2;

	if (Dc_valor1==Dc_valor2){
	cout<< " Ambas valores son iguales " <<endl;
	}
	else if(Dc_valor1>Dc_valor2) {
	cout<< " El valor " <<Dc_valor2<< " es mayor que " <<Dc_valor1<<endl;
	       }
	else{
		cout<< " El valor " <<Dc_valor1<< " es menor que   " <<Dc_valor2<<endl;
	}
cout<<"\n//======================================================="<<endl;
cout<<"//=====> Nombre del programa: Comparar dos numeros <====="<<endl;
cout<<"//==========> Archivo : CapurroDanna-Compara.cpp <=========="<<endl;
cout<<"//================> Autor: Danna Capurro <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}



// Programa para sumar varios numeros
int  Dc_SumaN ()
{
	int Dc_c= 0 , Dc_n, flag1;
	float Dc_s= 0 , Dc_x;
	cout<< " \n //==> Programa para sumar varios numeros <==// \n  " <<endl;
	cout<< " Ingrese la cantidad de elementos a sumar: " <<endl;
	cin>>Dc_n;
        do{
		cout<< " Ingrese el valor del elemento " <<Dc_c+1<< " : " <<endl;  
		cin>>Dc_x;
		Dc_c=Dc_c+ 1 ;
		Dc_s=Dc_s+Dc_x;
	}while (Dc_c<Dc_n);
	cout<< " La Cantidad de elementos ingresados?Es: " <<Dc_n<<endl;
	cout<< " La Suma de los elementos es: " <<Dc_s<<endl;

cout<<"\n//======================================================="<<endl;
cout<<"//====> Nombre del programa: Suma de varios numeros <===="<<endl;
cout<<"//===========> Archivo : CapurroDanna-SumaN.cpp <==========="<<endl;
cout<<"//================> Autor: Danna Capurro <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-23 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}
	
	
// Programa Punto Venta
int  Dc_PuntoVenta ()
{
<<<<<<< HEAD
	int Dc_C=0, Dc_B, flag1;
	float Dc_A=0, Dc_X, Dc_s, Dc_Vdsc, Dc_V1, Dc_Ivav, Dc_Fn;
	cout<<"\n //==> Programa para conocer el Punto de Venta <==//\n "<<endl;
	cout<<"Ingrese el valor de los productos a sumar"<<endl;
	cin>>Dc_B;
	do{
		cout<<"Ingrese el valor de su compra "<<Dc_C+1<<endl;
		cin>>Dc_X;
		Dc_C=Dc_C+1;
		Dc_A=Dc_A+Dc_X;
	}while (Dc_C<Dc_B);
	cout<<"Ingrese el Valor del Descuento: "<<endl;
	cin>>Dc_s;
	cout<<"Valor Bruto de Compra: "<<Dc_A<<endl;
	Dc_Vdsc=(Dc_A*Dc_X)/100;
	cout<<"Valor de su Descuento: "<<Dc_Vdsc<<endl;
	Dc_V1=Dc_A-Dc_Vdsc;
	Dc_Ivav=Dc_V1*0.12;
	cout<<"Valor Obtenido del IVA: "<<Dc_Ivav<<endl;
	Dc_Fn=(Dc_A-Dc_Vdsc)+Dc_Ivav;
	cout<<"Valor Final: "<<Dc_Fn<<endl;
=======
	int Dc_C= 0 ,Dc_B, flag1;
	float Dc_A= 0 ,Dc_x,Dc_Tb,Dc_PIVA,Dc_Pdsc,Dc_IVA= 0.12 ,Dc_dsc= 0.30 ,Dc_VT;
	cout<< " \n //==> Programa para conocer el Punto de Venta <==// \n  " <<endl;
	cout<< " Ingrese Cantidad de elementos a comprar: " <<endl;
	cin>>Dc_B;
	do{
		cout<< " Ingrese el valor del elemento: " <<Dc_C+1 <<endl;
		cin>>Dc_x;
		Dc_C=Dc_C+ 1 ;
		Dc_A=Dc_A+Dc_x;
		Dc_PIVA=Dc_A*Dc_IVA;
		cout<< " El valor del IVA de su compra es:$ " <<Dc_PIVA<<endl;
		Dc_Pdsc=Dc_A*Dc_dsc;
		cout<< " El valor del descuento de su compra es:$ " <<Dc_Pdsc<<endl;
		Dc_Tb=Dc_PIVA+Dc_Pdsc;
	} while (Dc_C<Dc_B);
	if (Dc_Tb==Dc_A){
cout<< " Su compra aplica a Descuento: " <<Dc_Tb<<endl;
		Dc_IVA=Dc_Tb*Dc_PIVA/ 100 ;
		Dc_dsc=Dc_Tb*Dc_Pdsc/ 100 ;
	} else {
		Dc_VT=Dc_A+Dc_PIVA-Dc_Pdsc;
	}
cout<< " El valor total a pagar es:$ " <<Dc_VT<<endl;
>>>>>>> 7ef082412cdd0f4c605cdd1ea42a3c055f661b4f
cout<<"\n//======================================================="<<endl;
cout<<"//========> Nombre del programa: Punto de Venta <========"<<endl;
cout<<"//=========> Archivo : CapurroDanna-PuntoVenta.cpp <========"<<endl;
cout<<"//================> Autor: Danna Capurro <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}
	
	
// Programa laedad
int  Dc_laedad ()
{
<<<<<<< HEAD
	int Dc_dd, Dc_mm, Dc_aa, Dc_dd1, Dc_mm1, Dc_aa1, Dc_da, Dc_ma, Dc_ya, flag1;
	cout<<"\n //==> Programa para saber la edad exacta de una persona <==//\n "<<endl;
	cout<<"INGRESE LA FECHA ACTUAL: dd/mm/yy: "<<endl;
=======
int Dc_dd,Dc_mm,Dc_aa,Dc_dd1,Dc_mm1,Dc_aa1,Dc_yy1,Dc_da,Dc_ma,Dc_yy,Dc_ya, flag1;
	cout<< " \n //==> Programa para saber la edad exacta de una persona <==// \n  " <<endl;
	cout<< " INGRESE LA FECHA ACTUAL: Dia Mes AñO " ;
>>>>>>> 7ef082412cdd0f4c605cdd1ea42a3c055f661b4f
	cin>>Dc_dd>>Dc_mm>>Dc_aa;
	cout<<"INGRESE SU FECHA DE NACIMIENTO: dd/mm/yy: "<<endl;
	cin>>Dc_dd1>>Dc_mm1>>Dc_aa1;
	if (Dc_dd<Dc_dd1){
		Dc_dd=Dc_dd+30;
		Dc_mm=Dc_mm-1;
		Dc_da=Dc_dd-Dc_dd1;
	}
	        else {
			Dc_da=Dc_dd-Dc_dd1;
		}
	if (Dc_mm<Dc_mm1){
		Dc_mm=Dc_mm+12;
		Dc_aa=Dc_aa-1;
		Dc_ma=Dc_mm-Dc_mm1;
	}
		else {
			Dc_ma=Dc_mm-Dc_mm1;
		}
	Dc_ya=Dc_aa-Dc_aa1;

cout<<"USTED TIENE: "<<Dc_ya<<" Años, "<<Dc_ma<<" Meses "<<"y "<<Dc_da<<" Dias."<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Edad de una persona <====="<<endl;
cout<<"//===========> Archivo : CapurroDanna-laedad.cpp <=========="<<endl;
cout<<"//================> Autor: Danna Capurro <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
	return 0;
}



// Programa CuentaMoneda
int  Dc_CuentaMoneda ()
{
	int Dc_n, Dc_c= 0 , Dc_c1= 0 , Dc_c2= 0 , flag1;
	float Dc_x,Dc_a= 0 , Dc_a1= 0 , Dc_a2= 0 ;
	cout<< " \n //==> Programa para contar y clasificar monedas <==// \n  " <<endl;
	cout<< "CANTIDAD DE MONEDAS A INGRESAR :" <<endl;
	cin>>Dc_n;
	do{
		cout<< " INGRESO EL VALOR DE LA MONEDA (10,25): " ;
		cin>>Dc_x;
		Dc_c=Dc_c+ 1 ;
		Dc_a=Dc_a+Dc_x;
		if (Dc_x== 10 ){
			Dc_c1=Dc_c1+ 1 ;
			Dc_a1=Dc_a1+Dc_x;
		} else {
		Dc_c2=Dc_c2+ 1 ;
		Dc_a2=Dc_a2+Dc_x;
		}
		
} while (Dc_c<Dc_n);
	cout<< " EL RESULTADO FUE: " <<endl;
	cout<< " CANTIDAD DE MONEDAS INGRESADAS: " <<Dc_c<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO CONTADO: " <<Dc_a<<endl;
	cout<< " CANTIDAD DE MONEDAS DE 10 INGRESADAS: " <<Dc_c1<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO DE MONEDAS DE 10: " <<Dc_a1<<endl;
	cout<< " CANTIDAD DE MONEDAS DE 25 INGRESADAS: " <<Dc_c2<<endl;
	cout<< " CANTIDAD TOTAL EN DINERO DE MONEDAS DE 25: " <<Dc_a2<<endl;
cout<<"\n//======================================================="<<endl;
cout<<"//======> Nombre del programa: Contador de Monedas <====="<<endl;
cout<<"//========> Archivo : CapurroDanna-CuentaMoneda.cpp <======="<<endl;
cout<<"//================> Autor: Danna Capurro <=================="<<endl;
cout<<"//=========> Fecha de elaboración: 2022-04-29 <=========="<<endl;
cout<<"//=======> Fecha ultima actualización: 2022-05-13 <======"<<endl;
cout<<"//======================================================="<<endl;
cout<< "\n Press Enter to exit. \n"<<endl;
	flag1=cin.ignore().get();
return 0;
}

	
// Menú Principal
int  Dc_menu ()
{
	int op,flag1;

	do{
			system ("clear");
			cout<< " **************PROGRAMAS DE CAPURRO DANNA************** " <<endl<<endl;
			cout<< " 1.- COMPARA DOS NUMEROS \n " ;
			cout<< " 2.- SUMA DE VARIOS NUMEROS. \n " ;
			cout<< " 3.- PUNTO DE VENTA \n " ;
			cout<< " 4.- CALCULA LA EDAD. \n " ;
			cout<< " 5.- MAQUINA CUENTA MONEDA. \n " ;
			cout<< " 0.- Salir del menú. \n " ;
			cout<< " Ingrese una opcion: " ; cin>>op; // la variable op siver para la oppcion a escoger
			switch (op){
				case  1 :
					system ("clear");
					Dc_Compara ();			
					break ;
				case  2 :
					system ("clear");
					Dc_SumaN ();
					break ;
				case  3 :
					system ("clear");
					Dc_PuntoVenta ();
					break ;
				case  4 :
					system ("clear");
					Dc_laedad ();
					break ;
				case  5 :
					system ("clear");
					Dc_CuentaMoneda ();
					break ;
				}
				if (op!= 0 && op> 5 ){
				   cout << " \n Opcion no valida \n " <<   " Presiona Enter para continuar \n";	    
				  flag1=cin.ignore().get();
				  }		  
				if(op==0){
					system("clear");
					cout<<"\n//======================================================="<<endl;
					cout<<"//===> e-mail de contacto: danna.capurro.mendoza@utelvt.edu.ec <==="<<endl;
					cout<<"//================> Esmeraldas - Ecuador <==============="<<endl;
					cout<<"//======================================================="<<endl;
					cout<<"\n Presione (Enter) para volver: \n"<<endl;
				}
				  system("cd ..");
	}while(op!=0);

	return(0);
}
