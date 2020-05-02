#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

struct datos{
	string gen;
	int i,n=4,x,cont;
	int ar[100];
	float peso, alt, edad;
};
void ingreso();
void reporte();
int main(){
int opc;

cout<<" 1. Ingreso"<<endl;
cout<<" 2. Reporte"<<endl;

cout<<" Ingrese opcion: "<<endl;
cin>>opc;

if (opc==1){
ingreso();
}
if (opc==2){
reporte();
}

}
	
void ingreso(){
	string gen;
	int i,n=4,x,cont;
	int ar[100];
	float peso, alt, edad;
	string s;
	
	ofstream grabararchivo;
	
		grabararchivo.open("Datos.txt",ios::app);
	do{
	
	
		
		cout<<"Ingrese Peso: ";
		cin>>peso;
		cout<<"Ingrese Altura: ";
		cin>>alt;
		cout<<"Ingrese Edad: ";
		cin>>edad;
		cout<<"Ingrese Genero (M/F): ";
		cin>>gen;
		grabararchivo<<peso<<"\t"<<alt<<"\t"<<edad<<"\t"<<gen<<endl;
				
		cout<<"Ingresar otra persona 1.SI 2.NO "<<endl;
		cin>>cont;
	}	while(cont!=2);
		
	
		
		grabararchivo.close();
		
	
	cout<<"\n"<<"Ingresos"<<endl;
	cout<<"Peso\tAltura\tEdad\tGenero"<<endl;
	ifstream leerarchivo;
	try {
		leerarchivo.open("Datos.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
}

void reporte(){
//declaracion de variables
	int ppeso,aalt,eed,i;
	string ggen;
	float sumap= 0;
	float sumaa= 0;
	float sumae= 0;
	
	ifstream db;	
	try{
	//lesctura del archivo
		db.open("datos.txt",ios::in);	
	//encabezado
		cout<<"Datos del archivo:"<<endl;
		cout<<"Peso|\t|Altura|\t|Edad|\t|Genero|"<<endl;		
	//Desplegar en pantalla los datos del archivo
		while (db>>ppeso>>aalt>>eed>>ggen){
			cout<<ppeso<<"\t  "<<aalt<<"\t\t  "<<eed<<"\t  "<<ggen<<endl; 
	//lee los datos de la columna	
		i++;					
	//sumatoria por cada columna
		sumap+=ppeso;
		sumaa+=aalt;
		sumae+=eed;

		}	
		db.close();	//cerrar archivo
	//Mostrar en pantalla los promedios	
	cout<<"\nPromedio Peso: "<<sumap/i<<"\tPromedio Altura: "<<sumaa/i<<"\tPromedio Edad: "<<sumae/i<<endl;
	
		system("Pause");
	}
	catch(exception& X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		cout<<"Error: "<<X.what()<<endl;
		system("Pause");
	}
	
}
/*//mostrar el total global de la venta del dia y
//determinar el total de lo vendido por producto, mostrando tambien el porcentaje
//con relacion al total.
	ifstream db;
	float edad;
	float sumatotal=0;	
	try{	
		db.open("datos.txt",ios::in);
		while (db >>edad){
		
		sumatotal=edad +sumatotal;
	}
		db.close();
		
		cout<<setprecision(5)<<"Total de Ventas:          "<<sumatotal<<endl;
		
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}		
	
	}
*/
