/*		--
		Hugo Estuardo Andrino Duque  9941-19-23714
		
	Ejercicio 3 - 5 puntos. Utilizar Ciclos, Archivos, Arreglos, Funciones, y Punteros
	En una fábrica de confección de suéteres y pantalones de niño, se hace necesario que se haga un programa que lleve el control 
	de la producción. Para hacer un suéter, se necesita 1 metro de tela y 2 botones y para hacer un pantalón, 2 metros de tela y un zíper. 
	Para lo cual se debe registrar diariamente las ventas de pedidos realizados por los vendedores en el sistema, esto debe almacenarse 
	en archivo. La fábrica cuenta semanalmente con 500 metros de tela, 400 botones y 225 zíperes como materia prima para poder producir 
	las ordenes, por tal motivo el programa deberá garantizar que cada pedido pueda ser producido en la semana debido al límite de materia prima,
	de lo contrario debe ser pospuesto para la siguiente.  La fábrica requiere que el programa tenga un menú principal con las siguientes 
	opciones:
	
"	Una opción para cargar los datos de ventas diarias y rebajar la materia prima del inventario para producir las unidades.
"	Otra opción para verificar que pedidos pueden entregarse en la semana y cual deben entregarse hasta la siguiente. 
"	Función para que los vendedores puedan modificar las unidades vendidas según el código de pedido
"	El programa debe ser capaz de anular o borrar pedidos, se debe buscar por código de producto.

La información de pedidos que debe almacenar debe ser:  
código de pedido, tipo producto (1 sueter,2 Pantalón), unidades vendidas, semana a entregar (1,2,3,4)



*/

#include <fstream>
#include <iostream>
#include <string>
#include <sstream> 
#include <regex>
#include <iomanip> 

using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*materiales semanales:  500 metros de tela por semana, 400 botones y 225 ziperes
						 en teoria semanalmente con lo anterior se pueden fabricar 225 pantalones sobrando 25 metros de tela
						 o se podrian fabricar 200 sueteres quedando 300 metros de tela.

						*/
						
int total_tela_sem=500, total_boton_sem=400, total_zipper_sem=225;
int dosbotones=2, unzip=1, telaunmt=1, teladosmt=2;
int codigo_pedido=0,sueter_cant=0, pantalon_cant=0, codped=0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu_principal();
void cargar_datos();
void verificar_pedidos();
void modificar_pedidos();
void borrar_pedidos();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	
	setlocale(LC_CTYPE,"Spanish");
	menu_principal();

}


void menu_principal(){
			
		string ret;
		int opc;
		do{
				
			system("CLS");
			system("color 70");
			cout<<"\n \t \t \t   Ejercicio # 3---Manejo de fabrica de confeccion de ropa---"<<endl;
			cout<<"\n \t AL ABRIR DE NUEVO EL PROGRAMA SE RECOMIENDA ABRIR PRIMERO EL REPORTE PARA SABER CUANTO MATERIAL QUEDA DISPONIBLE"<<endl;
			cout<<"\n \t TAMBIEN SE RECOMIENDA ABRIR LA VENTAMA DE FORMA MAXIMIZADA PARA UNA CORRECTA VISUALIZACION"<<endl;
			cout<<"\n seleccione la opcion que desea usar: 1.cargar datos   2.verificar pedidos   3.modificar pedidos   4.eliminar pedidos"<<endl;
			cout<<"\n \t"; cin>>opc;
			if(opc==1){	cargar_datos();			}
			if(opc==2){	verificar_pedidos();	}
			if(opc==3){	modificar_pedidos();	}
			if(opc==4){	borrar_pedidos();		}
			if(opc>=5){	cout<<"\n \t Opcion incorrecta..."<<endl;	}
				
			cout<<"\n \t Desea volver al menu principal: si/no"<<endl;
			cout<<"\n \t "; cin>>ret;
				
			} while(ret=="si");			
}


void cargar_datos(){
					
				string ing,ret2, lleva_sueter, lleva_pantalon;
				int cant_sueter, cant_pantalon,a,b,c,d,e,f,g,h,x,y,z,preliminartela1, preliminartela2, preliminarbotones, preliminarzipper, unidades_vendidas;
				
					preliminartela2=x;
					preliminarbotones=y;
					preliminarzipper=z;
					
					cout<<"\n \t Segun el historial de pedidos, ingrese los materiales disponibles a continuacion: "<<endl;
					cout<<"\n \t Cuanta tela hay disponible: "<<endl; cout<<"\n \t"; cin>>total_tela_sem; 
					cout<<"\n \t Cuantos botones hay disponibles: "<<endl; cout<<"\n \t"; cin>>total_boton_sem;
					cout<<"\n \t Cuantos zippers hay disponibles: "<<endl; cout<<"\n \t"; cin>>total_zipper_sem;
				
				do{
					system("CLS");
					system("color 70");
					
					
					
					
					cout<<"\n \t por favor ingrese el codigo del pedido: "<<endl;
					cout<<"\n \t"; cin>>codigo_pedido;
					cout<<"\n \t En el pedido se solicitan sueteres?  si/no: "<<endl;
					cout<<"\n \t"; cin>>lleva_sueter;
						if(lleva_sueter=="si"){
											dosbotones;
											telaunmt;
											cout<<"\n \t Cuantos sueteres lleva el pedido: "<<endl;
											cout<<"\n \t"; cin>>cant_sueter;
											a=cant_sueter*telaunmt;
											b=cant_sueter*dosbotones;
											//sueter_completo=a+b;
											c=total_tela_sem-a;
											d=total_boton_sem-b;
											preliminartela1=c;
											preliminarbotones=d;
												
												
												}
						if(lleva_sueter=="no"){	cout<<"\n \t pulse una tecla para continuar..."<<endl;
												preliminartela1=total_tela_sem;	preliminarbotones=total_boton_sem;}
						
						preliminartela1;
						preliminarbotones;
						
					cout<<"\n \t En el pedido se solicitan pantalones?  si/no: "<<endl;
					cout<<"\n \t"; cin>>lleva_pantalon;
						if(lleva_pantalon=="si"){
											unzip;
											teladosmt;
											cout<<"\n \t Cuantos pantalones lleva el pedido: "<<endl;
											cout<<"\n \t"; cin>>cant_pantalon;
											e=cant_pantalon*teladosmt;
											f=cant_pantalon*unzip;
											//pantalon_completo=e+f;
											g=preliminartela1-e;
											h=total_zipper_sem-f;
											preliminartela2=g;
											preliminarzipper=h;
												}
						if(lleva_pantalon=="no"){	cout<<"\n \t pulse una tecla para continuar..."<<endl;
												preliminartela2=preliminartela1;	preliminarzipper=total_zipper_sem;}
						
				
					
					cout<<"\n \t La cantidad de tela restante es de: "<<preliminartela2<<endl;		x=preliminartela2;
					cout<<"\n \t La cantidad de botones restante es de: "<<preliminarbotones<<endl;	y=preliminarbotones;
					cout<<"\n \t La cantidad de zippers restante es de: "<<preliminarzipper<<endl;	z=preliminarzipper;
					
					total_tela_sem=x; total_boton_sem=y; total_zipper_sem=z;
					
					if(total_tela_sem<=0){   cout<<"\n \t Se acabo el lote de tela semanal, Proximo Pedido se puede procesar hasta la proxima semana..."<<endl;		/*total_tela_sem=0;*/}
					if(total_boton_sem<=0){  cout<<"\n \t Se acabo el lote de botones semanal, Proximo Pedido se puede procesar hasta la proxima semana..."<<endl;		/*total_boton_sem=0;*/}
					if(total_zipper_sem<=0){ cout<<"\n \t Se acabo el lote de zipper semanal,  Proximo Pedido se puede procesar hasta la proxima semana..."<<endl;		/*total_zipper_sem=0;*/}
					
					unidades_vendidas=cant_sueter+cant_pantalon;
					
					cout<<"\n \t ________________________________________________________________"<<endl;
					cout<<"\n \t La descripcion de su pedido es: "<<endl;
					cout<<"\n \t Codigo del pedido:  "<<codigo_pedido<<endl;
					cout<<"\n \t Sueter: "<<cant_sueter<<endl;
					cout<<"\n \t Pantalon: "<<cant_pantalon<<endl;
					cout<<"\n \t Unidades vendidas: "<<unidades_vendidas<<endl;
					cout<<"\n \t Materia prima disponible:   "<<"Tela: "<<total_tela_sem<<"\t"<<"Botones: "<<total_boton_sem<<"\t"<<"Zipper: "<<total_zipper_sem<<endl;
					cout<<"\n \t ________________________________________________________________"<<endl;
					codped=codigo_pedido;
					sueter_cant=cant_sueter;
					pantalon_cant=cant_pantalon;
					
					cout<<"\n \t ¿Desea ingresar a la base de datos?	si/no"<<endl;
					cout<<"\n \t "; cin>>ing;
							
							try {
			
								if(ing=="si"){
						  
					
											cout<<"\n \t comprobando archivo.... "<<endl;
															  
											ofstream archivo;
				
											archivo.open("problema3_base_pedidos_semanales.txt",ios::app);
				
											if(archivo.fail()){cout<<"\t no se puede abrir el archivo"<<endl; exit(1); }
	
											cout<<"\n \t Ingresando datos..."<<endl;
											archivo<<codped<<"\t"<<"Sueter:"<<"\t"<<sueter_cant<<"\t"<<"Pantalones:"<<"\t"<<pantalon_cant<<"\t"<<"unidades_vendidas:"<<"\t"<<unidades_vendidas<<"\t"<<total_tela_sem<<"\t"<<total_boton_sem<<"\t"<<total_zipper_sem<<endl;
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
					
					
					cout<<"\n \t Desea ingresar otro pedido: si/no"<<endl;
					cout<<"\n \t "; cin>>ret2;
				
					} while(ret2=="si");	
}


void verificar_pedidos(){
			
			int suetercant, pantaloncant, unidadesvend, i, codpedido, telaac, botonac, zipperac;
			string suet, pant, uvend, ts;
			
			//archivo<<codped<<"\t"<<"Sueter:"<<"\t"<<sueter_cant<<"\t"<<"Pantalones:"<<"\t"<<pantalon_cant<<"\t"<<"unidades_vendidas:"<<"\t"<<unidades_vendidas<<endl;
						
			system("CLS");
			system("Color 60");
			
			ifstream db;
				
			try{
				
			db.open("problema3_base_pedidos_semanales.txt",ios::in);	

			cout<<"\n \t \t \t \t \t Datos en la base: "<<endl;
			
			//Abrir ventana completa para buena visualizacion
			
			while (db>>codpedido>>suet>>suetercant>>pant>>pantaloncant>>uvend>>unidadesvend>>telaac>>botonac>>zipperac){
		
			if(telaac>=1 && telaac<=500 ){ ts="Pedido se entrega en semana 1";	}
			if(telaac<=(-1) && telaac>=(-500) ){ ts="Pedido se entrega en semana 2";	}
			if(telaac<=(-501) && telaac>=(-1000) ){ ts="Pedido se entrega en semana 3";	}
			if(telaac<=(-1001) && telaac>=(-1500) ){ ts="Pedido se entrega en semana 4";	}
			if(telaac<=(-1501)){ ts="Pedido se entrega el proximo mes";	}
			cout<<"\n Codigo pedido: "<<codpedido<<"  cantidad de sueter: "<<suetercant<<"  cantidad de pantalones: "<<pantaloncant<<"  Unidades totales vendidas: "<<unidadesvend<<"\t"<<"Materiales restantes: "<<"Tela: "<<telaac<<" "<<"Botones: "<<botonac<<" "<<"Zipper: "<<zipperac<<"\n"<<ts<<endl;
													}
			db.close();	}
			
			catch(exception& X){
			cout<<"\n \t Error en la manipulacion del archivo..."<<endl;
			cout<<"\n \t Error: "<<X.what()<<endl;
			system("Pause");
							   }
	
}

void modificar_pedidos(){
						int aux, flag;
					int codpedido,suetercant, pantaloncant, unidadesvend, telaac, botonac, zipperac, unidades_vendidas,n1,n2,n3,ntela1,ntela2,ntelaf,nboton,nzipper,nbotonf,nzipperf;
					string suet, pant, uvend;
					
					ifstream db; //archivo anterior
					ofstream db_n; //archivo nuevo
					
					system("CLS");
					system("Color 40");
					
					
					
					remove("Temporal.txt");
	
					db.open("problema3_base_pedidos_semanales.txt",ios::in);
					db_n.open("Temporal.txt",ios::app);
	
					cout<<"A continuacion Ingrese la informacion de unidades vendidas que desea modificar: "<<endl;
					cout<<"Ingrese ID: "<<endl;
					cin>>aux;
					cout<<"Ingrese nueva cantidad de sueters: "<<endl;
					cin>>n1;
					cout<<"Ingrese nueva cantidad de pantalones: "<<endl;
					cin>>n2;
					cout<<"Las nuevas unidades vendidas son: "<<endl;
					n3=n1+n2;
					cout<<n3<<endl;
					
	
					while (db>>codpedido>>suet>>suetercant>>pant>>pantaloncant>>uvend>>unidadesvend>>telaac>>botonac>>zipperac){
						
					if(aux==codpedido){
						
					ntela1=n1*1;
					nboton=n1*2;
					ntela2=n2*2;
					nzipper=n2*1;
					ntelaf=((ntela1+ntela2)*(-1))+500;
					nbotonf=(nboton*(-1))+400;
					nzipperf=(nzipper*(-1))+225;
									
									db_n<<codpedido<<"\t"<<"Sueter:"<<"\t"<<n1<<"\t"<<"Pantalones:"<<"\t"<<n2<<"\t"<<"unidades_vendidas:"<<"\t"<<n3<<"\t"<<ntelaf<<"\t"<<nbotonf<<"\t"<<nzipperf<<endl;
									cout<<"Registro Actualizado...."<<endl;
					flag =1;
								}	
										
					else if(aux!=codpedido)
					db_n<<codpedido<<"\t"<<"Sueter:"<<"\t"<<suetercant<<"\t"<<"Pantalones:"<<"\t"<<pantaloncant<<"\t"<<"unidades_vendidas:"<<"\t"<<unidadesvend<<"\t"<<telaac<<"\t"<<botonac<<"\t"<<zipperac<<endl;
					//aux=0;
					//oid=0;					
													}
					db.close();
					db_n.close();
	
					if (flag==1){
					remove("problema3_base_pedidos_semanales.txt");
					rename("Temporal.txt","problema3_base_pedidos_semanales.txt");
								}	
	
}

void borrar_pedidos(){
	
					
					int aux, flag;
					int codpedido,suetercant, pantaloncant, unidadesvend, telaac, botonac, zipperac, unidades_vendidas;
					string suet, pant, uvend;
					
					ifstream db; //archivo anterior
					ofstream db_n; //archivo nuevo
					
					system("CLS");
					system("Color 90");
					
					
					
					remove("Temporal.txt");
	
					db.open("problema3_base_pedidos_semanales.txt",ios::in);
					db_n.open("Temporal.txt",ios::app);
	
					cout<<"Ingrese ID que desea borrar: "<<endl;
					cin>>aux;
	
					while (db>>codpedido>>suet>>suetercant>>pant>>pantaloncant>>uvend>>unidadesvend>>telaac>>botonac>>zipperac){
						
					if(aux==codpedido){
					cout<<"Registro Eliminado...."<<endl;
					flag =1;
								}	
										
					else if(aux!=codpedido)
					db_n<<codpedido<<"\t"<<"Sueter:"<<"\t"<<suetercant<<"\t"<<"Pantalones:"<<"\t"<<pantaloncant<<"\t"<<"unidades_vendidas:"<<"\t"<<unidadesvend<<"\t"<<telaac<<"\t"<<botonac<<"\t"<<zipperac<<endl;
					//aux=0;
					//oid=0;					
													}
					db.close();
					db_n.close();
	
					if (flag==1){
					remove("problema3_base_pedidos_semanales.txt");
					rename("Temporal.txt","problema3_base_pedidos_semanales.txt");
								}	
					system("Pause");
}
