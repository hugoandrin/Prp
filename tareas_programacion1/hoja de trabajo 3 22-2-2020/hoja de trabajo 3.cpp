//Ejercicio # 2:
//El director de un colegio desea realizar un programa que procese un archivo de registros correspondiente a los diferentes alumnos del centro a fin de obtener 
//los siguientes datos:

//Nota más alta y número de identificación del alumno correspondiente.
//Nota media del colegio.
//Datos de Estudiantes:

//Identificación
//Nombre
//Nota

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

int opcion,ret,ret2,ret3,salir, confirm1;
void codigo_programa();

/////////////////////////////////////////////
	
	int codalum;
	string nombre;
	int nota;

	
/////////////////////////////////////////////

int main(){
	
	codigo_programa();
	
	
	system("PAUSE");
	return 0;
		  }
		  
/////////////////////////////////////////////

void codigo_programa(){
				
				do{
				
				
				system("CLS");
				system( "color 70");
				cout<<"\n \t \t \t \t Programa que gestiona los alumnos de un colegio: "<<endl;
				cout<<"\n \t Por favor elija una de las siguientes opciones: "<<endl;
				cout<<"\n \t 1. ingreso de datos de los alumnos: "<<endl;
				cout<<"\n \t 2. consulta de los alumnos: "<<endl;
				cout<<"\n \t 3. Salir."<<endl;
				int opcion = 0;
				cin >> opcion;



					switch(opcion){
						
    					case 1: 	
    								system("CLS");
    								do{
									cout<<"\n \t \t \t \t \t \t Ingreso de alumnos"<<endl;
									cout<<"\n \t Ingrese el codigo del alumno: "<<endl;
									cin>>codalum;
									fflush(stdin);
									cout<<"\n \t Ingrese el nombre del alumno: "<<endl;
									getline(cin,nombre,'\n');
									cout<<"\n \t Ingrese la nota del alumno "<<endl;
									cin>>nota;
									fflush(stdin);
									
									cout<<"\n \t La informacion ingresada es la siguiente: "<<endl;
									cout<<"Codigo alumno: "<<codalum<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t nota alumno: "<<nota<<endl;
									cout<<"\n \t si la informacion es correcta presione 1, de lo contrario repita el proceso: "<<endl;
									cin>>confirm1;
									
												if(confirm1==1){
													
															  cout<<"\n \t comprobando archivo: "<<endl;
															  
															  	ofstream archivo;
				
																archivo.open("colegio.txt",ios::app);
				
																if(archivo.fail()){
					
																cout<<"\t no se puede abrir el archivo"<<endl;
																exit(1);
								 												 }
	
															  	cout<<"\n \t Ingresando datos..."<<endl;
															  	archivo<<"Codigo alumno: "<<codalum<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t nota alumno: "<<nota<<endl;
															  	cout<<"\n \t Ingreso correcto..."<<endl;
															  	
															  	fflush(stdin);
																archivo.close();
																}
												
												else{	cout<<"\n \t opcion incorrecta, presione 0 para repetir menu"<<endl;	}
												
									
									cout<<"\n \t Si desea otro ingreso en la base de datos presione 1, para salir presione 0"<<endl;
      								cin>>ret2;
      								system("CLS");
									} while(ret2==1 && ret2<2);
    					break;
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    					
    					case 2: 
    								system("CLS");
									do{
									cout<<"\n \t \t \t \t \t \t Consulta de alumnos"<<endl;
									
																ifstream archivo; 
				
																archivo.open("colegio.txt",ios::in);
				
																if(archivo.fail()){
					
																		cout<<"\t no se puede abrir el archivo"<<endl;
																		exit(1);}
																
    															else{
																		char linea[128];
   																		long contador = 0L;
    																	while(!archivo.eof()) {
        																archivo.getline(linea, sizeof(linea));
       																	cout << linea << endl;}}
       																	
       															//if (nivelactual==nivelminimo){
																   
    																	//cout<<"Nivel Minimo"<<endl;
																						//	}
    																	
																//else{
																		//cout<<"Todo Ok"<<endl;
																//	}
																	
									cout<<"\n Si desea otra consulta en la base de datos presione 1, para salir presione cualquier tecla \n";
      								cin>>ret3;
      								system("CLS");
									} while(ret3==1 && ret3<2);
									
    					break;
    					
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    					
    					case 3:		
    								cout<<"A continuacion va a salir del programa, cualquier cambio no guardado no sera almacenado."<<endl;
                              		cout<<"Si desea salir presione (1), si desea regresar al menu anterior presione (0) y posteriormente presione (1) "<<endl;
                              		cin>>salir;
                                    if(salir==1){ exit (-1);}
                        break;
    					
    					
    					default: 
									cout<<"Usted ha ingresado una opción incorrecta"<<endl;
								}
				
				
				
					cout<<"\n Si desea volver al menu principal presione 1, para salir presione cualquier tecla \n";
      				cin>>ret;

				 } while(ret==1 && ret<2);

}
