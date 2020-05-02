//Hugo Andrino 9941-19-23714.

/*	EJERCICIO#2
Realice un programa que, dado el peso, la altura, la edad y el género (M/F) de un grupo de N personas
que pertenecen a un departamento de la república, obtenga un promedio de peso, altura y edad de esta
población. Los datos deben guardarse de forma ordenada por edad en un archivo de datos. Así mismo
el programa debe ser capaz leer los datos del archivo y generar un reporte con la media del peso, altura
y la edad. */

#include<iostream>
#include<fstream>
#include<string>
#include <sstream> 
#include <regex>
#include <iomanip> 

using namespace std;

void mp();
void ingreso();
void reporte();

////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	setlocale(LC_CTYPE,"Spanish");
	
		mp();	
	
		  }
////////////////////////////////////////////7///////////////////////////////////////////////////////////////
void mp(){
			
			int opc, ret;
			string exit1;
			
			do{
			system("CLS");
			system("color 70");
			cout<<"\n \t \t \t \t \t  --Menu principal--"<<endl;
			cout<<"\n \t Por favor seleccione la opcion que desea utilizar"<<endl;
			cout<<"\n \t Presione 1.ingreso de datos "<<endl;
			cout<<"\n \t Presione 2.generacion de reporte "<<endl;
			cout<<"\n \t Presione 3.salir "<<endl;
			cout<<"\n \t "; cin>>opc;
			if (opc==1){  ingreso();	}
			if (opc==2){  reporte();	}
			
			if (opc==3){ cout<<"\n \t Desea salir: indique si o no: "<<endl;
					   	 cout<<"\n \t "; cin>>exit1;
					   	 if(exit1=="si"){	exit(1); }
					   	 if(exit1=="no"){	cout<<"\n \t Repita de nuevo el menu..."<<endl;	 }
					   }
					   
			if (opc>=4){ cout<<"\n \t Opcion invalida..."<<endl; exit(1);	}
			
			cout<<"\n \t Si desea volver al menu principal presione 1, para salir 2"<<endl;
      		cout<<"\n \t "; cin>>ret;

			} while(ret==1 && ret<2);
	
}
///////////////////////////////////////////////////////////////////////////////

void ingreso(){
			
			int ret2,iedad;	
			string idep, ing;
			float ialtura, ipeso;
			
			
			do{
			system("CLS");
			system("Color 80");
			
			cout<<"\n \t \t \t \t \t --Ingreso de datos al censo--"<<endl;
			cout<<"\n \t Ingrese la edad: "<<endl;
			cout<<"\n \t "; cin>>iedad;
			cout<<"\n \t Ingrese la altura en metros: "<<endl;
			cout<<"\n \t "; cin>>ialtura;
			cout<<"\n \t Ingrese el peso en kilogramos: "<<endl;
			cout<<"\n \t "; cin>>ipeso;
			fflush(stdin);
			cout<<"\n \t Ingrese el departamento donde reside: "<<endl;
			cout<<"\n \t "; getline(cin,idep,'\n');
			fflush(stdin);
			
			cout<<"\n \t Los datos ingresados son los siguientes:"<<endl;
			cout<<"\n \t ________________________________________________________"<<endl;
			cout<<"\n \t La edad es:"<<"\t"<<iedad<<" años"<<endl;
			cout<<"\n \t La altura es:"<<"\t"<<ialtura<<"mts"<<endl;
			cout<<"\n \t El peso es:"<<"\t"<<ipeso<<"kg"<<endl;
			cout<<"\n \t El departamento donde reside es:"<<"\t"<<idep<<endl;
			cout<<"\n \t ________________________________________________________"<<endl;
			
			cout<<"\n \t Si la informacion que ingreso esta correcta por favor indique si, de lo contrario elija no"<<endl;
			cout<<"\n \t "; cin>>ing;
			
			try {
			
			if(ing=="si"){
						  
						cout<<"\n \t comprobando archivo.... "<<endl;
															  
						ofstream archivo;
				
						archivo.open("censo.txt",ios::app);
				
								if(archivo.fail()){cout<<"\t no se puede abrir el archivo"<<endl; exit(1); }
	
						cout<<"\n \t Ingresando datos..."<<endl;
						archivo<<iedad<<"\t"<<ialtura<<"\t"<<ipeso<<"\t"<<idep<<endl;
						cout<<"\n \t Ingreso correcto..."<<endl;
															  	
						fflush(stdin);
						archivo.close();
						
						}
						
						 
			if(ing=="no"){ cout<<"\n \t Datos incorrectos, Por favor repita el menu de ingreso...."<<endl;		}
				}
			
			catch(exception X){
			cout<<"Error en la manipulacion del archivo"<<endl;
			system("Pause");
							  }	
			
			cout<<"\n \t Si desea otro ingreso en la base de datos presione 1, para salir presione 2"<<endl;
      		cout<<"\n \t "; cin>>ret2;
			} while(ret2==1 && ret2<2);
	
}
//////////////////////////////////////////////////////////////////////////////

void reporte(){
			
			
			int ret3,oedad;	
			string odep;
			float oaltura, opeso;
			
			system("CLS");
			system("Color 60");
			
			ifstream db;
				
			try{
				
			db.open("censo.txt",ios::in);	

			cout<<"\n \t \t \t \t \t Datos del censo: "<<endl;
			cout<<"\n \t --Edad--"<<"\t"<<"\t"<<"--Altura--"<<"\t"<<"\t"<<"--Peso--"<<"\t"<<"\t"<<"--Departamento--"<<endl;		
			while (db>>oedad>>oaltura>>opeso>>odep){
		
			cout<<"\n \t Edad: "<<oedad<<" años"<<"\t"<<"\t"<<"Altura: "<<oaltura<<"mts.      "<<"\t"<<" "<<"Peso: "<<opeso<<"Kg."<<"\t"<<" "<<"Departamento: "<<odep<<endl;
			cout<<" "<<endl;
													}
			db.close();	}
			
			catch(exception& X){
			cout<<"\n \t Error en la manipulacion del archivo..."<<endl;
			cout<<"\n \t Error: "<<X.what()<<endl;
			system("Pause");
							   }
			
			
			/*ifstream db1;
			try{
			
			
			db1.open("censo.txt",ios::in);
			
			float prom_edad, prom_altura, prom_peso;
			
			cout<<"\n \t \t \t \t \t ----------Promedios---------- "<<endl;
				
				while(db1>>oedad>>oaltura>>opeso>>odep){
				
				for(int i=0; i>=oedad; i++)
				prom_edad=oedad/i;
								
				cout<<oedad<<endl;}
				cout<<prom_edad;
				db.close();	}
				
			catch(exception& X){
			cout<<"\n \t Error en la manipulacion del archivo..."<<endl;
			cout<<"\n \t Error: "<<X.what()<<endl;
			system("Pause");
							   }  */
		}
				
				
				
			
			


//////////////////////////////////////////////////////////////////////////////

