/*Autores: Mejia Jose, Ibarra Emiko, Capurro Danna, Lucas Javier, Valencia Ismael.
Fecha de creación: 20/05/2022 */

#include<iostream>
#include<stdlib.h>
using namespace std;
#include"jm_libreria.h"
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
					//jm_comparaa();
					break;
				case 3:
					system("clear");
					//jm_puntoventa;
					break;
				case 4:
					system("clear");
					//jm_laedad;
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
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;
				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	return(0);
}
