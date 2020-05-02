
/*Ejercicio # 1:
El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>


using namespace std;

int opcion,ret,ret2,ret3,salir, confirm1;
void codigo_programa();


struct jugador {
	
		string nombre;
		string apellido;
		int nacionalidad;
		int edad;
		
				};
		



/////////////////////////////////////////////////////////////////////////////////////////

int main(){
	
	codigo_programa();
	
	
	system("PAUSE");
	return 0;
	
		  }


////////////////////////////////////////////////////////////////////////////////////////


void codigo_programa(){
				
				do{
				
				
				system("CLS");
				system( "color 70");
				cout<<"\n \t \t \t \t Programa que calcula el sueldo de los jugadores del club"<<endl;
				cout<<"\n \t Por favor elija una de las siguientes opciones: "<<endl;
				cout<<"\n \t 1. ingreso de jugadores: "<<endl;
				cout<<"\n \t 2. consulta de planilla :"<<endl;
				cout<<"\n \t 3. Salir."<<endl;
				int opcion = 0;
				cin >> opcion;



					switch(opcion){
					
						
    					case 1: 	
    								
									system("CLS");
    								do{
									cout<<"\n \t \t \t \t \t \t Ingreso de jugadores a planilla"<<endl;
									fflush(stdin);
									cout<<"\n \t Ingrese el nombre del jugador: "<<endl;
									string nombre1;
									getline(cin,nombre1,'\n');
									fflush(stdin);
									cout<<"\n \t Ingrese el apellido del jugador: "<<endl;
									string apellido1;
									getline(cin,apellido1,'\n');
									fflush(stdin);
									cout<<"\n \t Ingrese la edad: "<<endl;
									int edad1;
									cin>>edad1;
									fflush(stdin);
									cout<<"\n \t seleccione la nacionalidad: "<<endl;
									cout<<"\n \t presione 1 para Guatemalteco, presione 2 para extranjero"<<endl;
									int nacionalidad1;
									cin>>nacionalidad1;
									fflush(stdin);
									
									
									cout<<"\n \t La informacion ingresada es la siguiente: "<<endl;
									cout<<"Nombre: "<<nombre1<<"\t"<<"Apellido: "<<apellido1<<"\t"<<"Edad: "<<edad1<<"\t"<<"nacionalidad: "<<nacionalidad1<<endl;
									cout<<"\n \t si la informacion es correcta presione 1, de lo contrario presione 0: "<<endl;
									cin>>confirm1;
									
												if(confirm1==1){
													
															  cout<<"\n \t comprobando archivo: "<<endl;
															  
															  	ofstream archivo;
				
																archivo.open("planilla jugadores.txt",ios::app);
				
																if(archivo.fail()){
					
																cout<<"\t no se puede abrir el archivo"<<endl;
																exit(1);
								 												 }
	
															  	cout<<"\n \t Ingresando datos..."<<endl;
															  	archivo<<nombre1<<"\t"<<apellido1<<"\t"<<edad1<<"\t"<<nacionalidad1<<endl;
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
									cout<<"\n \t \t \t \t \t \t Consulta de planilla"<<endl;
									
																ifstream archivo; 
				
																archivo.open("planilla jugadores.txt",ios::in);
				
																if(archivo.fail()){
					
																		cout<<"\t no se puede abrir el archivo"<<endl;
																		exit(1);}
																
    															/*else{
																		char linea[128];
   																		long contador = 0L;
    																	while(!archivo.eof()) {
        																archivo.getline(linea, sizeof(linea));
       																	cout << linea << endl;}}*/
       																	
       																int lineas;
																	string s;
																	while (getline(archivo, s))
       																lineas++;
    																archivo.close();
    
    																jugador recordset[lineas];
																	archivo.open("planilla jugadores.txt",ios::in);
																	
																	if(archivo.fail()){
																	cout<<"No se pudo abrir el archivo!!!";
																	exit(1);
																					  }	
	
																	for (int i = 0; i < lineas; i++){
        																if (!archivo){                                               
            																cerr << "No se puede abrir el archivo " << endl;
           																			}
       
        															archivo>>recordset[i].nombre>>recordset[i].apellido>>recordset[i].edad>>recordset[i].nacionalidad;

																									}
    																archivo.close();
    																
    																
    																for (int i = 0; i < lineas; i++){
    																	
    																	int sueldo=2500;
    																	int bono_ext=500;
    																	int salario_total=0;
    																	string nac;
    																		
    																		
    																		if(recordset[i].edad>=15 && recordset[i].edad<=20){	salario_total=sueldo+1400;	}
    																		if(recordset[i].edad>=21 && recordset[i].edad<=25){	salario_total=sueldo+1500;	}
    																		if(recordset[i].edad>=26 && recordset[i].edad<=30){	salario_total=sueldo+1200;	}
    																		if(recordset[i].edad>=30)						  {	salario_total=sueldo+800;	}
    																		if(recordset[i].edad<15 )						  {	salario_total=-500;}
    																		if(recordset[i].nacionalidad==1)				  {nac="Guatemalteco";}
    																		int salario2=salario_total+bono_ext;
    																		if(recordset[i].nacionalidad==2)				  {nac="Extranjero",salario_total=salario2;}
    																		
																																
																															  	
    																		
    																																					
    																cout<<"Nombre: "<<recordset[i].nombre<<"\t"<<"Apellido: "<<recordset[i].apellido<<"\t"<<"Edad: "<<recordset[i].edad<<"\t"<<"Nacionalidad: "<<nac<<"\t"<<"Sueldo: "<<salario_total<<endl;	
																								
																								
																									}
																
       																	
       														
																	
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



