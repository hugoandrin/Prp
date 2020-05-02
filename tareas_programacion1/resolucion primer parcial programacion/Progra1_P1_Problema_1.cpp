/*									Ejercicio # 1 - 3 puntos.
Una empresa tiene diez almacenes y necesita crear un programa que lea las ventas mensuales de los diez almacenes, calcular la media 
de ventas y obtener un listado de los almacenes cuyas ventas mensuales son superiores a la media. */

//Hugo Estuardo Andrino Duque		Carnet:9941-19-23714

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>

using namespace std;

float v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,vp,vt;
int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
int local, opc;
string ing;
string m;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void reporte();
void almacen();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	setlocale(LC_CTYPE,"Spanish");
				
				string ret2;
				do{
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Ejercicio # 1---Manejo de almacen---"<<endl;
				cout<<"\n \t seleccione la opcion que desea usar:  		1.ingreso 		2.reporte"<<endl;
				cout<<"\n \t"; cin>>opc;
				if(opc==1){	almacen();	}
				if(opc==2){	reporte();	}
				if(opc>=3){	cout<<"\n \t Opcion incorrecta..."<<endl;	}
				
				cout<<"\n \t Desea volver al menu principal: si/no"<<endl;
				cout<<"\n \t "; cin>>ret2;
				
				} while(ret2=="si");
		  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void almacen(){
	
			string ret;
			
			do{
				
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Ejercicio # 1---Manejo de almacen---"<<endl;
				cout<<"\n \t  Por favor indique el identificador del almacen, 1 al 10 "<<endl;
				cout<<"\n \t"; cin>>local;
				
				if (local==1){	
										cout<<"\n \t Almacen 1..."<<endl;
										a1=1;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v1;
									}
									
				if (local==2){	
										cout<<"\n \t Almacen 2..."<<endl;
										a2=2;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v2;
									}
				
				if (local==3){	
										cout<<"\n \t Almacen 3..."<<endl;
										a3=3;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v3;
									}
				
				if (local==4){	
										cout<<"\n \t Almacen 4..."<<endl;
										a4=4;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v4;
									}
				
				if (local==5){	
										cout<<"\n \t Almacen 5..."<<endl;
										a5=5;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v5;
									}
				
				if (local==6){	
										cout<<"\n \t Almacen 6..."<<endl;
										a6=6;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v6;
									}
				
				if (local==7){	
										cout<<"\n \t Almacen 7..."<<endl;
										a7=7;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v7;
									}
				
				if (local==8){	
										cout<<"\n \t Almacen 8..."<<endl;
										a8=8;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v8;
									}
				
				if (local==9){	
										cout<<"\n \t Almacen 9..."<<endl;
										a9=9;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v9;
									}
				
				if (local==10){	
										cout<<"\n \t Almacen 10..."<<endl;
										a10=10;
										cout<<"\n \t Por favor ingrese la venta mensual del almacen: "<<endl;
										cout<<"\n \t"; cin>>v10;
									}
				
				if (local>=11){	
										cout<<"\n \t Opcion incorrecta..."<<endl;
									}
									
				cout<<"\n \t Desea ingresar otro almacen? si/no"<<endl;
				cout<<"\n \t "; cin>>ret;
				
				} while(ret=="si");
}

void reporte(){
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Ejercicio # 1---Manejo de almacen---"<<endl;
				cout<<"\n \t  Generacion de reporte "<<endl;
				vt=v1+v2+v3+v4+v5+v6+v7+v8+v9+v10;
				vp=vt/10;
				
				cout<<"\n \t__________________________________"<<endl;
				cout<<"\n \t Almacen 1:  "<<"Ventas: "<<"Q"<<v1<<"\t";  if(v1>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 2:  "<<"Ventas: "<<"Q"<<v2<<"\t";  if(v2>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 3:  "<<"Ventas: "<<"Q"<<v3<<"\t";  if(v3>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 4:  "<<"Ventas: "<<"Q"<<v4<<"\t";  if(v4>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 5:  "<<"Ventas: "<<"Q"<<v5<<"\t";  if(v5>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 6:  "<<"Ventas: "<<"Q"<<v6<<"\t";  if(v6>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 7:  "<<"Ventas: "<<"Q"<<v7<<"\t";  if(v7>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 8:  "<<"Ventas: "<<"Q"<<v8<<"\t";  if(v8>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 9:  "<<"Ventas: "<<"Q"<<v9<<"\t";  if(v9>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t Almacen 10: "<<"Ventas: "<<"Q"<<v10<<"\t"; if(v10>vp){cout<<"Superior a la media de ventas"<<endl;	}
				cout<<"\n \t  "<<endl;
				
				cout<<"\n \t Media de ventas: "<<" Q"<<vp<<endl;
				cout<<" "<<endl;
				
				
				
				cout<<"\n \t Si desea guardar el reporte por favor indique si, de lo contrario elija no"<<endl;
				cout<<"\n \t "; cin>>ing;
			
				try {
			
				if(ing=="si"){
						  
						cout<<"\n \t comprobando archivo.... "<<endl;
															  
						ofstream archivo;
				
						archivo.open("reporte_de_ventas.txt",ios::app);
				
								if(archivo.fail()){cout<<"\t no se puede abrir el archivo"<<endl; exit(1); }
	
						
						cout<<"\n \t Ingresando datos..."<<endl;

						archivo<<"\n \t Almacen: "<<a1<<"\t"<<"ventas: "<<"Q"<<v1<<endl;
						archivo<<"\n \t Almacen: "<<a2<<"\t"<<"ventas: "<<"Q"<<v2<<endl;
						archivo<<"\n \t Almacen: "<<a3<<"\t"<<"ventas: "<<"Q"<<v3<<endl;
						archivo<<"\n \t Almacen: "<<a4<<"\t"<<"ventas: "<<"Q"<<v4<<endl;
						archivo<<"\n \t Almacen: "<<a5<<"\t"<<"ventas: "<<"Q"<<v5<<endl;
						archivo<<"\n \t Almacen: "<<a6<<"\t"<<"ventas: "<<"Q"<<v6<<endl;
						archivo<<"\n \t Almacen: "<<a7<<"\t"<<"ventas: "<<"Q"<<v7<<endl;
						archivo<<"\n \t Almacen: "<<a8<<"\t"<<"ventas: "<<"Q"<<v8<<endl;
						archivo<<"\n \t Almacen: "<<a9<<"\t"<<"ventas: "<<"Q"<<v9<<endl;
						archivo<<"\n \t Almacen: "<<a10<<"\t"<<"ventas: "<<"Q"<<v10<<endl;
						archivo<<"\n \t Media de ventas: "<<" Q"<<vp<<endl;
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
	
}
