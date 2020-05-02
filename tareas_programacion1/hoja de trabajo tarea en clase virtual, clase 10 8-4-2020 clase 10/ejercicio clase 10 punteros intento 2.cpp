/*Buen dia a todos,

La tarea de hoy consiste en aplicar los conocimientos adquiridos acerca de punteros.

Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, por la motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.  El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.

Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras. */

#include<iostream>
#include<string>
#include<fstream>
#include <conio.h>

using namespace std;

void mp();
void ingreso();
void reporte();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int ret2;

struct emp1 {
	int cod_emp1=1;
	string nom_emp1, puesto_emp1, depto_emp1;
	float salario_emp1;
				};
				
struct emp2 {
	int cod_emp2=2;
	string nom_emp2, puesto_emp2, depto_emp2;
	float salario_emp2;
				};
				
struct emp3 {
	int cod_emp=3;
	string nom_emp3, puesto_emp3, depto_emp3;
	float salario_emp3;
				};
				
struct emp4 {
	int cod_emp=4;
	string nom_emp4, puesto_emp4, depto_emp4;
	float salario_emp4;
				};
				
struct emp5 {
	int cod_emp=5;
	string nom_emp5, puesto_emp5, depto_emp5;
	float salario_emp5;
				};

struct emp6 {
	int cod_emp=6;
	string nom_emp6, puesto_emp6, depto_emp6;
	float salario_emp6;
				};
				
struct emp7 {
	int cod_emp=7;
	string nom_emp7, puesto_emp7, depto_emp7;
	float salario_emp7;
				};

struct emp8 {
	int cod_emp=8;
	string nom_emp8, puesto_emp8, depto_emp8;
	float salario_emp8;
				};
				
struct emp9 {
	int cod_emp=9;
	string nom_emp9, puesto_emp9, depto_emp9;
	float salario_emp9;
				};

struct emp10 {
	int cod_emp=10;
	string nom_emp10, puesto_emp10, depto_emp10;
	float salario_emp10;
				};
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	
	setlocale(LC_CTYPE,"Spanish");
	mp();
	
}

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


void ingreso(){	
				int ret2;	
				do{
				
				system("CLS");
				system("Color 80");
				
				int n;
				float total_planilla;
				
				emp1  *b1;
				emp2  *b2;
				emp3  *b3;
				emp4  *b4;
				emp5  *b5;
				emp6  *b6;
				emp7  *b7;
				emp8  *b8;
				emp9  *b9;
				emp10 *b10;
				
				
				
				cout<<"\n \t \t \t \t \t -----Menu de ingreso-----"<<endl;
				cout<<"\n \t Indique el codigo del empleado, 1 al 10"<<endl;
				cout<<"\n \t"; cin>>n;
				
				if(n==1){
					b1 = new emp1;
					
					cout<<"\n \t Codigo de empleado 1 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b1->nom_emp1);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b1->puesto_emp1);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b1->depto_emp1=="Gerencia"; }
					if(pp==2){ b1->depto_emp1=="Administracion"; }
					if(pp==3){ b1->depto_emp1=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b1->salario_emp1;
					fflush(stdin);
						}
						
				if(n==2){
					b2 = new emp2;
					
					cout<<"\n \t Codigo de empleado 2 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b2->nom_emp2);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b2->puesto_emp2);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b2->depto_emp2=="Gerencia"; }
					if(pp==2){ b2->depto_emp2=="Administracion"; }
					if(pp==3){ b2->depto_emp2=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b2->salario_emp2;
					fflush(stdin);
					
						}
				
				if(n==3){
					b3 = new emp3;
					
					cout<<"\n \t Codigo de empleado 3 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b3->nom_emp3);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b3->puesto_emp3);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b3->depto_emp3=="Gerencia"; }
					if(pp==2){ b3->depto_emp3=="Administracion"; }
					if(pp==3){ b3->depto_emp3=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b3->salario_emp3;
					fflush(stdin);
					
						}
				
				if(n==4){
					b4 = new emp4;
					
					cout<<"\n \t Codigo de empleado 4 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b4->nom_emp4);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b4->puesto_emp4);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b4->depto_emp4=="Gerencia"; }
					if(pp==2){ b4->depto_emp4=="Administracion"; }
					if(pp==3){ b4->depto_emp4=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b4->salario_emp4;
					fflush(stdin);
					
						}
				
				if(n==5){
					b5 = new emp5;
					
					cout<<"\n \t Codigo de empleado 5 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b5->nom_emp5);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b5->puesto_emp5);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b5->depto_emp5=="Gerencia"; }
					if(pp==2){ b5->depto_emp5=="Administracion"; }
					if(pp==3){ b5->depto_emp5=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b5->salario_emp5;
					fflush(stdin);
					
						}
						
				if(n==6){
					b6 = new emp6;
					
					cout<<"\n \t Codigo de empleado 6 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b6->nom_emp6);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b6->puesto_emp6);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b6->depto_emp6=="Gerencia"; }
					if(pp==2){ b6->depto_emp6=="Administracion"; }
					if(pp==3){ b6->depto_emp6=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b6->salario_emp6;
					fflush(stdin);
					
						}
						
				if(n==7){
					b7 = new emp7;
					
					cout<<"\n \t Codigo de empleado 7 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b7->nom_emp7);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b7->puesto_emp7);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b7->depto_emp7=="Gerencia"; }
					if(pp==2){ b7->depto_emp7=="Administracion"; }
					if(pp==3){ b7->depto_emp7=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b7->salario_emp7;
					fflush(stdin);
					
						}
				
				if(n==8){
					b8 = new emp8;
					
					cout<<"\n \t Codigo de empleado 8 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b8->nom_emp8);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b8->puesto_emp8);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b8->depto_emp8=="Gerencia"; }
					if(pp==2){ b8->depto_emp8=="Administracion"; }
					if(pp==3){ b8->depto_emp8=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b8->salario_emp8;
					fflush(stdin);
					
						}
				
				if(n==9){
					b9 = new emp9;
					
					cout<<"\n \t Codigo de empleado 9 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b9->nom_emp9);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b9->puesto_emp9);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b9->depto_emp9=="Gerencia"; }
					if(pp==2){ b9->depto_emp9=="Administracion"; }
					if(pp==3){ b9->depto_emp9=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b9->salario_emp9;
					fflush(stdin);
					
						}
						
				if(n==10){
					b10 = new emp10;
					
					cout<<"\n \t Codigo de empleado 10 "<<endl;
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b10->nom_emp10);
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,b10->puesto_emp10);
					fflush(stdin);
					cout<<"\n \t Por favor seleccione el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t --1.Gerencia, 2.Administracion, 3.Produccion-- "<<endl;
					int pp;
					cout<<"\n \t";  cin>>pp;
					if(pp==1){ b10->depto_emp10=="Gerencia"; }
					if(pp==2){ b10->depto_emp10=="Administracion"; }
					if(pp==3){ b10->depto_emp10=="Produccion"; }
					if(pp>=4){ cout<<"\n \t Opcion incorrecta..."<<endl; }
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>b10->salario_emp10;
					fflush(stdin);
					
						}
				
					cout<<"\n \t Si desea ingresar otro empleado presione 1, para salir 2"<<endl;
      				cout<<"\n \t "; cin>>ret2;

					} while(ret2==1 && ret2<2);
					
}

void reporte(){
				
				emp1  *b1;
				emp2  *b2;
				emp3  *b3;
				emp4  *b4;
				emp5  *b5;
				emp6  *b6;
				emp7  *b7;
				emp8  *b8;
				emp9  *b9;
				emp10 *b10;
				
				cout<<"Codigo: "<<b1->cod_emp1<<" "<<"Nombre "<<b1->nom_emp1<<" "<<"Puesto: "<<b1->puesto_emp1<<" "<<"Departamento: "<<b1->depto_emp1<<" "<<"Salario: "<<b1->salario_emp1<<endl;
				cout<<"Codigo: "<<b2->cod_emp2<<" "<<"Nombre "<<b2->nom_emp2<<" "<<"Puesto: "<<b2->puesto_emp2<<" "<<"Departamento: "<<b2->depto_emp2<<" "<<"Salario: "<<b2->salario_emp2<<endl;
	
}

