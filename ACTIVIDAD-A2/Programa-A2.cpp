/*Autores: Mejia Jose, Ibarra Emiko, Capurro Danna, Lucas Javier, Valencia Ismael.
Fecha de creación: 20/05/2022 */

#include<iostream>
#include<stdlib.h>
using namespace std;
#include"jm_libreria.h"
#include"dc_libreria.h"
#include"LJ_libreria.h"
#include"vc_libreria.h"
int main ()
{
	int op,flag;

	do{
			system ("clear");
			cout<<"**************GRUPO PROGRAMACION 2022**************"<<endl<<endl;
			cout<<"1.- Programas de Mejia Jose \n";
			cout<<"2.- Programas de Capurro Danna.\n";
			cout<<"3.- Programas de Lucas Javier \n"; 
			cout<<"4.- Programas de Valencia Ismael \n";
			cout<<"5.- Programas de Ibarra Emiko \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; 
			switch(op){
				case 1:
					system("clear");
					 jm_menu();			
					break;
				case 2:
					system("clear");
					 Dc_menu();
					break;
				case 3:
					system("clear");
					 LJ_menu();
					break;
				case 4:
					system("clear");
					 vc_menu();
					break;
				case 5:
					system("clear");
					//jm_cuentamoneda;
					break;
				}
				if(op!=0 && op>5){
				   cout << "\n Opcion no valida \n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					system("clear");
					cout<<"========================================================="<<endl;
					cout<<"*************** Grupo-Programación2022® *****************"<<endl;
					cout<<"========================================================="<<endl;
					cout<<"* Mejia Jose, Capurro Danna, Lucas Javier, Ibarra Emiko *"<<endl;
					cout<<" ****************** Valencia Ismael *********************"<<endl;
					cout<<"========================================================="<<endl;
					cout<<"********************* 20/05/2022 ************************"<<endl;
					cout<<"\nQuieres salir completamente del sistema (presiona ENTER) :\n"<<endl;
				}
				  flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				  // cout<<flag;
				  system("cd .."); 
	}while(op!=0);

	return(0);
}
