/*
Ejercicio # 2

Una persona desea comprar entradas para un concierto que se realizará en la explanada de cierto lugar
de la ciudad. El precio de la entrada varía según la zona elegida, así tenemos que la lista de precios es la
siguiente:

Zona 	Identificación	 Precio
VIP 	 V 				350.00
Platea	 P				130.00
Popular  E 				50.00

Adicionalmente los precios tendrán un descuento en función del número de entradas que se compran,
así como si la persona que las adquiere es socio o no.
Se le pide elaborar un programa en C++ que solicite la zona elegida, el número de entradas a comprar y
consulte si es socio o no y nos determine y muestre el monto a pagar por la compra de las entradas. Todas
las ventas deben de ser grabadas un archivo de datos, así mismo el programa de ser capaz de mostrar el
monto total de lo vendido globalmente y por tipo de entrada mostrando también el porcentaje respecto
al total global vendido.

*/

#include<Iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

using namespace std;

void ingreso();
void reporte();
void menu();

int opc, ret;

struct entradas{
				string zona;
				string identificacion;
				double precio;
				int entradas;
				string socio;
			   };

///////////////////////////////////////////////////////////////
int main(){
	
		 menu();
		 
	return 0;
}
///////////////////////////////////////////////////////////////

void menu(){
	
			do{
			
			system("CLS");
			system("color 70");
			cout<<"\n \t \t  \t  \t  \t Venta de boletos explanada CD"<<endl;
			cout<<"\n \t Por favor seleccione la opcion que desea utilizar: "<<endl;
			cout<<"\n \t Presione 1. para ingreso de datos, presione 2. para imprimir reporte  "<<endl;
			cout<<"\n \t "; cin>>opc;
			
			if(opc==1){
					    ingreso();
				      }
				      
			if(opc==2){
					    reporte();
					  }
			if(opc>=3){
						cout<<"\n \t Opcion incorrecta..."<<endl;
			}
			
			cout<<"\n Si desea volver al menu principal presione 1, para salir presione cualquier tecla \n";
      		cin>>ret;
			
			  } while(ret==1 && ret<2);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
void ingreso(){
	
			int entradas1,confirm1, ret2, opcion1, opcion2;
			double precio1;
			string zona1,id;
			string so;
			
			system("CLS");
			do{
				
			system("color 30");
			fflush(stdin);
			cout<<"\n \t \t  \t \t \t  Ingreso de ventas boletos:  "<<endl;
			cout<<"\n \t Por favor ingrese la zona, 1.VIP, 2.Platea, 3.Popular :"<<endl;
			cout<<"\n \t ";	cin>>opcion1;
				if(opcion1==1){	zona1="VIP";		id="V";		precio1=350;			}
				if(opcion1==2){	zona1="Platea";		id="P";		precio1=130;			}
				if(opcion1==3){	zona1="Popular";	id="E";		precio1=50;				}
				if(opcion1>=4){cout<<"\n \t Opcion invalida"<<endl; exit(1);	}
				
			fflush(stdin);	
			
			cout<<"\n \t Por favor ingrese la cantidad de entradas vendidas: "<<endl;
			cout<<"\n \t "; cin>>entradas1;
			fflush(stdin);	
			
			cout<<"\n \t Por favor indique si el cliente es socio, 1.si, 2.no: "<<endl;
			cout<<"\n \t "; cin>>opcion2;
				if(opcion2==1){	so="si";}
				if(opcion2==2){	so="no";}
				if(opcion2>=3){cout<<"\n \t Opcion invalida"<<endl; exit(1);}
			fflush(stdin);
			system("CLS");	
			cout<<"\n \t La informacion ingresada es: "<<endl;
			cout<<"\n \t ___________________________________________"<<endl;
			cout<<"\n \t Zona: "<<zona1<<endl;
			cout<<"\n \t Identificador: "<<id<<endl;
			cout<<"\n \t Precio: Q"<<precio1<<endl;
			cout<<"\n \t Entradas vendidas: "<<entradas1<<endl;
			cout<<"\n \t Es socio?: "<<so<<endl;
			cout<<"\n \t ___________________________________________"<<endl;
			cout<<"\n \t Si la informacion esta correcta confirme a continuacion, de no ser asi repita el menu: "<<endl;
			cout<<"\n \t "; cin>>confirm1;
			
				if(confirm1==1){
							ofstream archivo;
							try {
							archivo.open("venta_de_boletos.txt",ios::app);
							archivo<<zona1<<"\t"<<id<<"\t"<<precio1<<"\t"<<entradas1<<"\t"<<so<<endl;
							archivo.close();
							cout<<"\n \t Escritura completa..."<<endl;
								}
								
							catch(exception X){
							cout<<"\n \t Error en la manipulacion del archivo"<<endl;
							      }
								}
								
				cout<<"\n \t Si desea otro ingreso en la base de datos presione 1, para salir presione 0"<<endl;
      			cin>>ret2;
				system("CLS");
				} while(ret2==1 && ret2<2);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7

void reporte(){
	
				int ret3;
				
				system("CLS");
				system("color 60");
				do{
					
				cout<<"\n \t \t \t \t \t \t Impresion de reportes"<<endl;
				cout<<"\n "<<endl;
				
				
					try{	
							ifstream archivo;
							archivo.open("venta_de_boletos.txt",ios::in);
								if(archivo.fail()){
					
											cout<<"\t no se puede abrir el archivo"<<endl;
											exit(1);}
							
							int lineas;
							string s;
							while (getline(archivo, s))
       						lineas++;
    						archivo.close();
							
							
								entradas recordset[lineas];
								archivo.open("venta_de_boletos.txt",ios::in);
																	
										if(archivo.fail()){
										cout<<"\n \t No se pudo abrir el archivo..."<<endl;
										exit(1);
														  }	
	
								for (int i = 0; i < lineas; i++){
        						if (!archivo){                                               
            					cerr << "\n \t No se puede abrir el archivo " << endl;
           									}
       
        						archivo>>recordset[i].zona>>recordset[i].identificacion>>recordset[i].precio>>recordset[i].entradas>>recordset[i].socio;

																}
    							archivo.close();
    																
    																
    							for (int i = 0; i < lineas; i++){
    								
    								
									float precio_total,a,b,c, prec1, prec2 ;
									prec1=recordset[i].entradas*recordset[i].precio;

									if(recordset[i].entradas>=3 && recordset[i].entradas<=6)			{a=prec1*5/100;		  }
									if(recordset[i].entradas>=7 && recordset[i].entradas<=9)			{a=prec1*7.5/100; 	  }									
    								if(recordset[i].entradas>=9)										{a=prec1*10/100;	  }
    								if(recordset[i].socio=="si")										{prec2=prec1*8/100;   }
									if(recordset[i].socio=="no")										{prec2=0;		      }
									b=prec1-(a);
									c=b-(prec2);
									precio_total=c;
									
    																																					
    								cout<<"Zona: "<<recordset[i].zona<<"\t"<<"ID: "<<recordset[i].identificacion<<"\t"<<"Precio: "<<recordset[i].precio<<"\t"<<"cant. de boletos "<<recordset[i].entradas<<"\t"<<"Es socio?: "<<recordset[i].socio<<"\t"<<"Precio prelim.: "<<prec1<<"\t"<<"Precio total: "<<c<<endl;	
																								
																							
																}
							

						
						 }
						
					catch (exception X){		
					cout<<"\n \t Error para abrir archivo..."<<endl;			
					exit(1);		   }
	
	
	
					cout<<"\n \t Si desea otra consulta en la base de datos presione 1, para salir presione cualquier tecla \n";
      				cin>>ret3;
      				system("CLS");
				  } while(ret3==1 && ret3<2);
	
}

