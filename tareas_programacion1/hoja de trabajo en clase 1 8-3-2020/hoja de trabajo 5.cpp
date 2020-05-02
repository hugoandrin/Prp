/*	 la compañía Xterminio s.a.  tiene las siguientes tarifas: 

	Tipo 	Servicio 			Costo X Hectárea 
	1		mala hierba			10.00
	2		langostas			20.00
	3		gusanos				30.00
	4		todo lo anterior	50.00
	
Además del área a fumigar es mayor a 500.00 hectáreas se tiene un descuento del 5%. Adicionalmente,
si el total a pagar por el servicio es mayor a Q1500.00 se tiene un descuento adicional del 10% sobre el
excedente.

La compañía necesita las estadísticas de los servicios que ha ofrecido a un grupo de agricultores durante
un periodo de tiempo. Por cada servicio debe ingresar los datos siguientes: Tipo de Fumigación (1 a 4) y
el número de hectáreas, toda esta información deberá almacenarse en una base de datos (archivo plano).
Se le pide que realice un programa en C++ que solicite el ingreso de la información de cada servicio
realizado a un grupo de agricultores. El programa deberá de leer los datos del archivo que tiene la
información antes almacenada y mostrar la cantidad de servicios de cada tipo de fumigación, determinar
el tipo servicio con mayor demanda y el monto total pagado por los clientes. 

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

struct servicio{
				int cod;
				float hect;
				double prec;
				string prod;
	
				};

///////////////////////////////////////////////////////////////
int main(){
	
		 menu();
	
}
///////////////////////////////////////////////////////////////

void menu(){
	
			do{
			
			system("CLS");
			system("color 70");
			cout<<"\n \t \t  \t  \t  \t Menu principal compañía Xterminio s.a."<<endl;
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
	
			int tipo_servicio, confirm1, ret2;
			float hectareas;
			double precio;
			string producto;
			
			system("CLS");
			do{
				
			system("color 30");
			cout<<"\n \t \t  \t \t \t  Ingreso de datos de los pedidos:  "<<endl;
			cout<<"\n \t Por favor ingrese el codigo del servicio: 1.Mala hierba, 2.Langostas, 3.Gusanos, 4.servicio completo."<<endl;
			cout<<"\n \t ";	cin>>tipo_servicio;
				if(tipo_servicio==1){	precio=10;	producto="Mala_hierba";			}
				if(tipo_servicio==2){	precio=20;	producto="Langostas";			}
				if(tipo_servicio==3){	precio=30;	producto="Gusanos";				}
				if(tipo_servicio==4){	precio=50;	producto="serv_completo";	}
				if(tipo_servicio>=5){cout<<"\n \t Opcion invalida"<<endl; exit(1);	}
				
			cout<<"\n \t Por favor ingrese las hectareas trabajadas:"<<endl;
			cout<<"\n \t "; cin>>hectareas;
			
			cout<<"\n \t La informacion ingresada es: "<<endl;
			cout<<"\n \t ___________________________________________"<<endl;
			cout<<"\n \t Codigo: "<<tipo_servicio<<endl;
			cout<<"\n \t Servicio: "<<producto<<endl;
			cout<<"\n \t Precio por hectarea: Q"<<precio<<endl;
			cout<<"\n \t Hectareas trabajadas: "<<hectareas<<endl;
			cout<<"\n \t ___________________________________________"<<endl;
			cout<<"\n \t Si la informacion esta correcta confirme a continuacion, de no ser asi repita el menu: "<<endl;
			cout<<"\n \t "; cin>>confirm1;
			
				if(confirm1==1){
							ofstream archivo;
							try {
							archivo.open("Xterminio s.a.txt",ios::app);
							archivo<<tipo_servicio<<"\t"<<producto<<"\t"<<precio<<"\t"<<hectareas<<endl;
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
				
				
					try{	
							ifstream archivo;
							archivo.open("Xterminio s.a.txt",ios::in);
								if(archivo.fail()){
					
											cout<<"\t no se puede abrir el archivo"<<endl;
											exit(1);}
							
							int lineas;
							string s;
							while (getline(archivo, s))
       						lineas++;
    						archivo.close();
							
							
								servicio recordset[lineas];
								archivo.open("Xterminio s.a.txt",ios::in);
																	
										if(archivo.fail()){
										cout<<"\n \t No se pudo abrir el archivo..."<<endl;
										exit(1);
														  }	
	
								for (int i = 0; i < lineas; i++){
        						if (!archivo){                                               
            					cerr << "\n \t No se puede abrir el archivo " << endl;
           									}
       
        						archivo>>recordset[i].cod>>recordset[i].prod>>recordset[i].prec>>recordset[i].hect;

																}
    							archivo.close();
    																
    																
    							for (int i = 0; i < lineas; i++){
    								
    								
									float precio1=recordset[i].prec*recordset[i].hect;
									float a=0;
									float precio_final=precio1-a;
    								
									if(recordset[i].hect>=500)						{a=precio1*5/100;	precio_final=precio1-a;}
									if(precio1>=1500)								{a=precio1*10/100;	precio_final=precio1-a;}									
    								if(precio1>=1500&&recordset[i].hect>=500)		{a=precio1*15/100;	precio_final=precio1-a;}
    												
    																																					
    								cout<<"codigo: "<<recordset[i].cod<<"\t"<<"Servicio: "<<recordset[i].prod<<"\t"<<"Precio por hectarea "<<recordset[i].prec<<"\t"<<"Hectareas: "<<recordset[i].hect<<"\t"<<"Precio a pagar: "<<precio_final<<endl;	
																								
																								
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

