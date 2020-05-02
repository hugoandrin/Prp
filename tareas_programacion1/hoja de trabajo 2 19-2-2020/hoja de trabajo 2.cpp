//intento de creacion de archivos secuenciales.
//el programa debe hacer esto: Se dispone de un archivo STOCK correspondiente a la existencia de artículos de un almacén y se desea señalar aquellos 
//artículos cuyo nivel está por debajo del mínimo y que visualicen un mensaje “hacer pedido”. Cada artículo contiene un registro con los siguientes 
//campos: número del código del artículo, nivel mínimo, nivel actual, proveedor, precio.

//El programa debe tener un menu que se especifiquen las siguientes opciones:
//1) Agregar productos (Grabar datos a un archivo)
//2) Leer archivo y mostrar en pantalla que productos tiene nivel minimo. 

//*if (nivel actual==nivel mínimo)
    //cout<<"Nivel Minimo";


#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>


using namespace std;

int opcion,ret,ret2,ret3,salir, confirm1;
void codigo_programa();

//struct producto{
	
	int codprod;
	string nombre;
	int nivelminimo;
	int nivelactual;
	string proveedor;
	float precio;
	
//				}articulo;

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
				cout<<"\n \t \t \t \t Programa que gestiona el stock de articulos en el almacen"<<endl;
				cout<<"\n \t Por favor elija una de las siguientes opciones: "<<endl;
				cout<<"\n \t 1. ingreso de productos:"<<endl;
				cout<<"\n \t 2. consulta de productos:"<<endl;
				cout<<"\n \t 3. Salir."<<endl;
				int opcion = 0;
				cin >> opcion;



					switch(opcion){
						
    					case 1: 	
    								system("CLS");
    								do{
									cout<<"\n \t \t \t \t \t \t Ingreso de productos"<<endl;
									cout<<"\n \t Ingrese el codigo del producto: "<<endl;
									cin>>codprod;
									fflush(stdin);
									cout<<"\n \t Ingrese el nombre del producto: "<<endl;
									getline(cin,nombre,'\n');
									cout<<"\n \t Ingrese el nivel minimo que desea poseer del producto: "<<endl;
									cin>>nivelminimo;
									cout<<"\n \t Ingrese el nivel actual que posee del producto: "<<endl;
									cin>>nivelactual;
									cout<<"\n \t Ingrese el proveedor del producto: "<<endl;
									fflush(stdin);
									getline(cin,proveedor,'\n');
									cout<<"\n \t Ingrese el precio del producto: "<<endl;
									cin>>precio;
									
									cout<<"\n \t La informacion ingresada es la siguiente: "<<endl;
									cout<<"Codigo: "<<codprod<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t minimo deseado: "<<nivelminimo<<"\t"<<"estado actual: "<<nivelactual<<"\t"<<"Proveedor: "<<proveedor<<"\t"<<"\t Precio: "<<"Q"<<precio<<endl;
									cout<<"\n \t si la informacion es correcta presione 1, de lo contrario repita el proceso: "<<endl;
									cin>>confirm1;
									
												if(confirm1==1){
													
															  cout<<"\n \t comprobando archivo: "<<endl;
															  
															  	ofstream archivo;
				
																archivo.open("almacen.txt",ios::app);
				
																if(archivo.fail()){
					
																cout<<"\t no se puede abrir el archivo"<<endl;
																exit(1);
								 												 }
	
															  	cout<<"\n \t Ingresando datos..."<<endl;
															  	archivo<<"Codigo: "<<codprod<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t minimo deseado: "<<nivelminimo<<"\t"<<"estado actual: "<<nivelactual<<"\t"<<"Proveedor: "<<proveedor<<"\t"<<"\t Precio: "<<"Q"<<precio<<endl;
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
									cout<<"\n \t \t \t \t \t \t Consulta de productos"<<endl;
									
																ifstream archivo; 
				
																archivo.open("almacen.txt",ios::in);
				
																if(archivo.fail()){
					
																		cout<<"\t no se puede abrir el archivo"<<endl;
																		exit(1);}
																
    															else{
																		char linea[128];
   																		long contador = 0L;
    																	while(!archivo.eof()) {
        																archivo.getline(linea, sizeof(linea));
       																	cout << linea << endl;}}
       																	
       															if (nivelactual==nivelminimo){
																   
    																	cout<<"Nivel Minimo"<<endl;
																							}
    																	
																else{
																		cout<<"Todo Ok"<<endl;
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
