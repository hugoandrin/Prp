/*								Ejercicio #4 - 5 puntos.

Se  le  pide  un  programa  que  solicite  primeramente  el  monto  total  de  compras  de  una 
persona. Si el monto es inferior a 100.00, el programa dirá que el  cliente no aplica a la 
promoción. Pero si la persona ingresa un monto en compras igual o superior a 100.00, el 
programa solicita el ingreso de un número entero del uno al cinco. 
 
Cada número corresponderá a un color diferente (1: Bola blanca; 2: Bola roja; 3: Bola azul; 
4:  Bola  verde;  5:  Bola  amarilla)  de  cinco  colores  de  bolas  que  hay  para  determinar  el 
descuento que el cliente recibirá como premio.  
 
Si la bola es color blanco, no hay descuento, pero si 
es uno de los otros cuatro colores, sí se aplicará un 
descuento determinado según la tabla adjunta, y ese 
descuento se aplicará sobre el total de la compra que 
ingreso  inicialmente  el  usuario,  de  manera  que  el 
programa mostrará un nuevo valor a pagar luego de 
haber aplicado el descuento.
Se le pide un programa que solicite primeramente el monto total de compras de una persona. 
Si el monto es inferior a 100.00, el programa dirá que el cliente no aplica a la promoción. 
Pero si la persona ingresa un monto en compras igual o superior a 100.00, el programa solicita el ingreso de un número 
entero del uno al cinco.  
Cada número corresponderá a un color diferente 
1: Bola blanca; 
2: Bola roja; 
3: Bola azul; 
4:  Bola verde; 
5:  Bola amarilla) de cinco colores de bolas que hay para determinar el descuento que el cliente recibirá como premio.
   
Si la bola es color blanco, no hay descuento, pero si es uno de los otros cuatro colores, 
sí se aplicará un descuento determinado según la tabla adjunta, y ese descuento se aplicará sobre el total de 
la compra que ingreso inicialmente el usuario, de manera que el programa mostrará un nuevo valor a pagar 
luego de haber aplicado el descuento.  Almacenar todos los datos de ventas y descuentos a un archivo. 

 Así mismo mostrar el total de ventas del día.




Tabla:
1.	Bola Blanca: No tiene descuento 
2.	Bola Roja:10%
3.	Bola Azul:  20% 
4.	Bola Verde: 25% 
5.	Bola Amarilla 50%															*/


//Hugo Estuardo Andrino Duque		Carnet:9941-19-23714

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void venta();
void reporte();
void mp();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	
		setlocale(LC_CTYPE,"Spanish");
		mp();

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mp(){
			
				string ret2;
				int opc;
				do{
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Ejercicio # 4---Calculo de descuentos en compras---"<<endl;
				cout<<"\n \t seleccione la opcion que desea usar: "<<endl; 
				cout<<"\n \t 1.ingreso"<<endl;
				cout<<"\n \t 2.reporte"<<endl;
				cout<<"\n \t"; cin>>opc;
				if(opc==1){	venta();	}
				if(opc==2){	reporte();	}
				if(opc>=3){	cout<<"\n \t Opcion incorrecta..."<<endl;	}
				
				cout<<"\n \t Desea volver al menu principal: si/no"<<endl;
				cout<<"\n \t "; cin>>ret2;
				
				} while(ret2=="si");
			
	
}

void venta(){
			
			string ret, porcentaje, ing;
			float monto_venta, desc, preliminar, total_venta;
			int bola;
			
			do{	
				system("CLS");
				system("color 70");
				fflush(stdin);
				cout<<"\n \t \t \t \t Ingreso de ventas"<<endl;
				cout<<"\n \t Por favor ingrese el total de la venta: "<<endl;
				cout<<"\n \t "; cin>>monto_venta;
				
					if(monto_venta<100){	
										cout<<"\n \t cliente no aplica a descuento..."<<endl;
										porcentaje="No_aplica";	
										desc=0;			}
										
					if(monto_venta>=100){	
										  cout<<"\n \t Por favor elija un numero del 1 al 5"<<endl;
										  cout<<"\n \t "; cin>>bola;
										  		if(bola==1){											  
										  							system("CLS");
																	system("color 07");
										  							desc=0;
										  							porcentaje="0%";
											  			  }
											  			
											  	if(bola==2){
										  							system("CLS");
																	system("color 74");
										  							desc=0.10;
										  							porcentaje="10%";
											  			}
											  			
											  	if(bola==3){
										  							system("CLS");
																	system("color 71");
										  							desc=0.20;
										  							porcentaje="20%";
											  			}
											  			
											  	if(bola==4){
										  							system("CLS");
																	system("color 72");
										  							desc=0.25;
										  							porcentaje="25%";
											  			}
											  			
											  	if(bola==5){	
										  							system("CLS");
																	system("color 76");
										  							desc=0.50;
										  							porcentaje="50%";
											  			}
											  			
											  	if(bola>6){	
										  							cout<<"\n \t Opcion incorrecta..."<<endl;
											  			}
										  
													}
				cout<<"\n \t ______________________________________________________________"<<endl;
				cout<<"\n \t Monto de venta: "<<"  Q"<<monto_venta<<endl;
				cout<<"\n \t Porcentaje de descuento: "<<"  Q "<<porcentaje<<endl;
				preliminar=monto_venta*desc;
				total_venta=monto_venta-preliminar;
				cout<<"\n \t Total de la venta: "<<"  Q"<<total_venta<<endl;
				cout<<"\n \t ______________________________________________________________"<<endl;
				
				fflush(stdin);
				
				cout<<"\n \t desea almacenar este registro en la base? si/no "<<endl;
				cout<<"\n \t "; cin>>ing;
			
				try {
			
				if(ing=="si"){
						  
						cout<<"\n \t comprobando archivo.... "<<endl;
															  
						ofstream archivo;
				
						archivo.open("descuentos_problema4.txt",ios::app);
				
						if(archivo.fail()){cout<<"\t no se puede abrir el archivo"<<endl; exit(1); }
	
						cout<<"\n \t Ingresando datos..."<<endl;
						archivo<<monto_venta<<"\t"<<porcentaje<<"\t"<<total_venta<<endl;
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
				
			
				cout<<"\n \t Si desea otro ingreso en la base de datos? si/no "<<endl;
      			cout<<"\n \t "; cin>>ret;
				} while(ret=="si");
	
}

void reporte(){
	
			float monto_venta, total_venta;
			string porcentaje;
			
			system("CLS");
			system("Color 60");
			
			ifstream db;
				
			try{
				
			db.open("descuentos_problema4.txt",ios::in);	

			cout<<"\n \t \t \t \t \t Datos en la base de descuentos: "<<endl;
				
			while (db>>monto_venta>>porcentaje>>total_venta){
		
			cout<<"\n \t Monto de venta: "<<" Q"<<monto_venta<<"\t"<<"  Porcentaje de descuento: "<<porcentaje<<"\t"<<"Total de venta: "<<" Q"<<total_venta<<endl;
															}
			db.close();	}
			
			catch(exception& X){
			cout<<"\n \t Error en la manipulacion del archivo..."<<endl;
			cout<<"\n \t Error: "<<X.what()<<endl;
			system("Pause");
							   }
			
			
}

