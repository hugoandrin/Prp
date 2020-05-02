/*									Ejercicio # 2 - 5 puntos.

Descripción de problema:  Escribir una función Salario que calcule los salarios de un trabajador para un número dado de 
horas trabajadas y un salario hora. Las horas que superen las 40 horas semanales se pagarán como extras con un salario 
hora 1,5 veces el salario ordinario. Así mismo se deberá calcular el monto a pagar de IGSS por cada trabajador.   
El programa deberá mostrar un menú para:  

1) Invocar dicha función y grabar datos a un archivo, 
2) Adicionalmente deberá tener una opción para leer el archivo y grabar los datos en memoria. 
3) Una opción para mostrar cuanto se paga de total de planilla e IGSS.		*/

//Hugo Estuardo Andrino Duque		Carnet:9941-19-23714

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <regex>

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void reporte();
void ingreso();
void mp();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	
		setlocale(LC_CTYPE,"Spanish");
		mp();

}

void mp(){
			
				string ret2;
				int opc;
				do{
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Ejercicio # 2---Calculo de prestaciones---"<<endl;
				cout<<"\n \t seleccione la opcion que desea usar:  		1.ingreso 		2.reporte"<<endl;
				cout<<"\n \t"; cin>>opc;
				if(opc==1){	ingreso();	}
				if(opc==2){	reporte();	}
				if(opc>=3){	cout<<"\n \t Opcion incorrecta..."<<endl;	}
				
				cout<<"\n \t Desea volver al menu principal: si/no"<<endl;
				cout<<"\n \t "; cin>>ret2;
				
				} while(ret2=="si");
			
	
}

void ingreso(){
				
				float htrab, sxh, hext, pext, phs, pago_total, igss, preal,hsimples;
				string nom_emp, ret, ing;
				
				do{
				
				
				system("CLS");
				system("color 70");
				cout<<"\n \t \t \t \t \t  Calculo de prestaciones para empleado individual.---"<<endl;
				fflush(stdin);
				cout<<"\n \t Por favor ingrese el nombre del empleado: "<<endl;
				cout<<"\n \t "; getline(cin,nom_emp,'\n');
				fflush(stdin);
				cout<<"\n \t Por favor ingrese las horas trabajadas: "<<endl;
				cout<<"\n \t "; cin>>htrab;
				cout<<"\n \t Por favor ingrese el sueldo por hora: "<<endl;
				cout<<"\n \t "; cin>>sxh;
				//maximo horas semanales 40, despues de las 40 se pagan como extras a 1.5 de sxh
				hext=htrab-40;  //calculo de hora extra por semana
				if(hext<=0){	hext=0;	}
				pext=((htrab-40)*sxh)*1.5; //calculo en Q de las horas extra
				phs=(htrab-hext)*sxh;//pago de horas simples
				if(pext<=0){	pext=0;	}
				pago_total=phs+pext;//suma en Q de las horas simples y las extras
				igss=pago_total*0.0483;
				preal=pago_total-igss;
				if(hext<=0){	hext=0;	}
				hsimples=htrab-hext;
				
				cout<<"\n \t___________________________________________________"<<endl;
				cout<<"\n \t La informacion ingresada es la siguiente: "<<endl;
				cout<<"\n \t Nombre de empleado: "<<"\t"<<nom_emp<<endl;
				cout<<"\n \t Horas simples: "<<" "<<hsimples<<endl;
				if(hext<=0){	hext=0;	}
				cout<<"\n \t horas extras: "<<" "<<hext<<endl;
				cout<<"\n \t Pago por Horas simples trabajadas: "<<" "<<phs<<endl;
				if(pext<=0){	pext=0;	}
				cout<<"\n \t Pago por Horas extras trabajadas: "<<" "<<pext<<endl;
				cout<<"\n \t Pago total entre horas: "<<" "<<"Q"<<pago_total<<endl;
				cout<<"\n \t Porcentaje de Igss en pago total: "<<" "<<"Q"<<igss<<endl;
				cout<<"\n \t Pago real: "<<" "<<"Q"<<preal<<endl;
				cout<<"\n \t___________________________________________________"<<endl;
				
				
				cout<<"\n \t Si la informacion que ingreso esta correcta? si/no "<<endl;
				cout<<"\n \t "; cin>>ing;
			
				try {
			
				if(ing=="si"){
						  
						cout<<"\n \t comprobando archivo.... "<<endl;
															  
						ofstream archivo;
				
						archivo.open("planilla_problema2.txt",ios::app);
				
						if(archivo.fail()){cout<<"\t no se puede abrir el archivo"<<endl; exit(1); }
	
						cout<<"\n \t Ingresando datos..."<<endl;
						archivo<<nom_emp<<"\t"<<hsimples<<"\t"<<hext<<"\t"<<phs<<"\t"<<pext<<"\t"<<pago_total<<"\t"<<igss<<"\t"<<preal<<endl;
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
	
			float htrab, sxh, hext, pext, phs, pago_total, igss, preal,hsimples;
			string nom_emp;
				
			system("CLS");
			system("Color 60");
			
			ifstream db;
				
			try{
				
			db.open("planilla_problema2.txt",ios::in);	

			cout<<"\n \t \t \t \t \t Datos en la base: "<<endl;
			
			//Abrir ventana completa para buena visualizacion
			
			while (db>>nom_emp>>hsimples>>hext>>phs>>pext>>pago_total>>igss>>preal){
		
			cout<<"\n Nombre: "<<nom_emp<<"  H.simples: "<<hsimples<<"  H.extras: "<<hext<<"  Pago simples: "<<phs<<"  Pago extras: "<<pext<<"  total: "<<pago_total<<"  Desc. igss: "<<igss<<"  Pago real: "<<preal<<endl;
													}
			db.close();	}
			
			catch(exception& X){
			cout<<"\n \t Error en la manipulacion del archivo..."<<endl;
			cout<<"\n \t Error: "<<X.what()<<endl;
			system("Pause");
							   }
	
}
