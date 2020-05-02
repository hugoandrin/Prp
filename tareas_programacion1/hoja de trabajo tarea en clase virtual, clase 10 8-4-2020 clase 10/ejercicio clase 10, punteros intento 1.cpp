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
//void reporte();


int ret2;

struct empleado {
	int cod_emp;
	string nom_emp, puesto_emp, depto_emp;
	float salario_emp;
				};

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
			//if (opc==2){  reporte();	}
			
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
				
				system("CLS");
				system("Color 80");
				
				int n, i;
				float total_planilla;
				
				empleado *base;
				
				
				cout<<"\n \t \t \t \t \t -----Menu de ingreso-----"<<endl;
				cout<<"\n \t ¿Cuantos empledos desea ingresar?"<<endl;
				cout<<"\n \t"; cin>>n;
				base = new empleado[n];
				for(i=0; i<n; i++){
			
					cout<<"\n \t Por favor ingrese el codigo de empleado: "<<endl;
					cout<<"\n \t";	cin>>base[i].cod_emp;	
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el Nombre del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,base[i].nom_emp);	
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el puesto del empleado: "<<endl;
					cout<<"\n \t";  getline(cin,base[i].puesto_emp); 
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el departamento al cual pertenece el empleado: "<<endl;
					cout<<"\n \t";  getline(cin,base[i].depto_emp); 
					fflush(stdin);
					cout<<"\n \t Por favor ingrese el salario del empleado: "<<endl;
					cout<<"\n \t";  cin>>base[i].salario_emp; 
					fflush(stdin);
					
					total_planilla=base[i].salario_emp;
				}
					cout<<"Codigo empleado: "<<base->cod_emp<<" "<<"Nombre del empleado: "<<base->nom_emp<<" "<<"Puesto: "<<base->puesto_emp<<" "<<"Depto: "<<base->depto_emp<<"Salario: "<<base->salario_emp<<endl;
					cout<<"El total del inventario es de: "<<total_planilla<<endl;
				
									
					
					
			
				
}

void reporte(){
				int i;
				empleado *base;
				base = new empleado;
				for(i=0; i<10; i++){
					
				cout<<base->cod_emp<<" "<<base->nom_emp<<" "<<base->puesto_emp<<" "<<base->cod_emp<<" "<<base->salario_emp<<" "<<endl;
				
								  }
}
