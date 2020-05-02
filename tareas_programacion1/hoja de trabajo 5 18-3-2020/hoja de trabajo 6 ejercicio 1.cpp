/*
Realice un programa que genere la venta de compra de un terreno/casa/departamento. Este programa
debe realizar los cálculos de acuerdo con la tabla abajo listada:
Dada

Dada la categoría, zona, tipo y el área del terreno o inmueble determine a cuánto asciende el monto que
deberá pagar para comprar el inmueble. El programa desarrollado deberá de ser capaz de generar un
reporte de el total vendido por categoría, zona y tipo de inmueble.


*/



#include <fstream>
#include <conio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct ventas{
	int cat;
	int zona;
	int tipo;
	float descuento;
	float precio;
	int unidades;
	float totalvta;
};


void venta();
void reporte();

/////////////////////////////////////////////////////////////////////////////////
int main(){
int n;	

			system("CLS");
			system("color 70");
		cout<<"----- menu -----"<<endl;
	cout<<" Venta -> 1  "<<endl;
	cout<<" Reporte -> 2  "<<endl;
	cin>> n;
	switch (n)
{
    case 1:
        venta();
        break;

    case 2:
        reporte();
        break;
	
}
}
//////////////////////////////////////////////////////////////////////////////////

	
void venta(){
	system("CLS");
	system("color 30");
	int cat;
	int zona;
	int tipo;
	float metros;
	float precio;
	int unidades;
	float descuento;
	float totalvta;
	string s;
	
	cout<<"----- compra de terreno -----"<<endl;
	cout<<" Ingrese categoria: "<<endl;
	cout<<" comercial -> 1  "<<endl;
	cout<<" residencial -> 2  "<<endl;
	cin>>cat;
	if (cat== 1){
	cout<<" Ingrese zona: "<<endl;
	cout<<" A -> 1  "<<endl;
	cout<<" B -> 2  "<<endl;
	cin>>zona;
			
	}else if(cat == 2){
	cout<<" Ingrese zona: "<<endl;
	cout<<" A -> 1  "<<endl;
	cout<<" B -> 2  "<<endl;
	cout<<" C -> 3  "<<endl;
	cin>>zona;
	}

	cout<<" Ingrese tipo: "<<endl;
	cout<<" Terreno -> 1  "<<endl;
	cout<<" Casa -> 2  "<<endl;
	cout<<" Departamento -> 3  "<<endl;
	cin>>tipo;
	
if(cat ==1 && zona == 1 && tipo == 1){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2200;
}else if (cat ==1 && zona == 1 && tipo == 2){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2500;
}else if (cat ==1 && zona == 1 && tipo == 3){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2100;
}else if (cat ==1 && zona == 2 && tipo == 1){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1300;
}else if (cat ==1 && zona == 2 && tipo == 2){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1500;
}else if (cat ==1 && zona == 2 && tipo == 3){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1200;
}else if (cat ==2 && zona == 1 && tipo == 1){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2100;
}else if (cat ==2 && zona == 1 && tipo == 2){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2500;
}else if (cat ==2 && zona == 1 && tipo == 3){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 2100;
}else if (cat ==2 && zona == 2 && tipo == 1){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1500;
}else if (cat ==2 && zona == 2 && tipo == 2){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1600;
}else if (cat ==2 && zona == 2 && tipo == 3){
	
		cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1300;
}else if (cat ==2 && zona == 3 && tipo == 1){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1100;
}else if (cat ==2 && zona == 3 && tipo == 2){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1300;
}else if (cat ==2 && zona == 3 && tipo == 3){
	
	cout<<" ingrese el numero de metros cuadrados "<<endl;
	cin>>metros;
	precio= metros * 1000;
}



	cout<<"Categoria: "<<cat<<"  Zona: "<<zona<<"  tipo: "<<tipo<<"  Metros cuadrados: "<<metros<<"  Monto a pagar: "<<precio;
	ofstream grabararchivo;
	try {
		grabararchivo.open("ventaTerreno.txt",ios::app);
		grabararchivo<<cat<<"\t"<<zona<<"\t"<<tipo<<"\t"<<metros<<"\t"<<precio<<endl;
		grabararchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
	cout<<"\n"<<"Ventas Actuales"<<endl;
	cout<<"Cat.  Zona    Tipo   Metros2    Total"<<endl;
	ifstream leerarchivo;
	try {
		leerarchivo.open("ventaTerreno.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
}

void reporte(){
	
system("CLS");
system("color 60");
	ifstream db;
	float ctg,zn,tip,u,tv=0;
	float sumatotal=0;
	float tp1=0;
	float tp2=0;
	float tp3=0;
	float tp4=0;
	float tp5=0;
	float tp6=0;	
	float tp7=0;
	float tp8=0;
	float tp9=0;
	float tp10=0;
	float tp11=0;
	float tp12=0;	
	float tp13=0;
	float tp14=0;
	float tp15=0;
	float cat1 =0;
	float cat2 =0;
	float var1 =0;
	float var2 =0;
	float var3 =0;
	float var4 =0;
	float var5 =0;		
	try{	
		db.open("ventaTerreno.txt",ios::in);
		
		while (db >>ctg >> zn >>tip>> u>>tv){
			sumatotal = tv + sumatotal;	
			
		               	if (ctg==1 && zn==1 && tip ==1)
				tp1+=tv;
			
		        	else if (ctg==1 && zn==1 && tip ==2)
				tp2+=tv;
		        	else if (ctg==1 && zn==1 && tip ==3)
				tp3+=tv;
					else if (ctg==1 && zn==2 && tip ==1)
				tp4+=tv;
		        	else if (ctg==1 && zn==2 && tip ==2)
				tp5+=tv;
					else if (ctg==1 && zn==2 && tip ==3)
				tp6+=tv;
			        else if (ctg==2 && zn==1 && tip ==1)
				tp7+=tv;
					else if (ctg==2 && zn==1 && tip ==2)
				tp8+=tv;
		        	else if (ctg==2 && zn==1 && tip ==3)
				tp9+=tv;
			    	else if (ctg==2 && zn==2 && tip ==1)
				tp10+=tv;
					else if (ctg==2 && zn==2 && tip ==2)
				tp11+=tv;
		         	else if (ctg==2 && zn==2 && tip ==3)
				tp12+=tv;
					else if (ctg==2 && zn==3 && tip ==1)
				tp13+=tv;
		        	else if (ctg==2 && zn==3 && tip ==2)
				tp14+=tv;
					else if (ctg==2 && zn==3 && tip ==3)
				tp15+=tv;
				
		}	
		db.close();
		
		var1= tp1+tp2+tp3;
		var2= tp4 + tp5 + tp6;
		cat1 = var1 + var2;
		var3 = tp7 + tp8 + tp9;
		var4 = tp10 + tp11 + tp12;
		var5 = tp13 + tp14 + tp15;
		cat2 = var3 + var4 + var5;
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<setprecision(5)<<"Total de Ventas:"<<sumatotal<<endl;
		cout<<" "<<endl;
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"categoria Comercial:  "<<"  total vendido:  "<<cat1<<endl;
		cout<<"zona A:  "<<"  total vendido:  "<<var1<<endl;
		cout<<setprecision(5)<<" Terreno  "<<tp1<<endl;
		cout<<setprecision(5)<<" Casa "<<tp2<<endl;
		cout<<setprecision(5)<<" Departamento   "<<tp3<<endl;
		cout<<" "<<endl;
		cout<<"zona B:  "<<"  total vendido:  "<<var2<<endl;
		cout<<setprecision(5)<<" Terreno  "<<tp4<<endl;
		cout<<setprecision(5)<<" Casa "<<tp5<<endl;
		cout<<setprecision(5)<<" Departamento   "<<tp6<<endl;
		cout<<"----------------------------------------------------------"<<endl;
		
		cout<<" "<<endl;
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"categoria Residencial:  "<<"  total vendido:  "<<cat2<<endl;
		cout<<"zona A:  "<<"  total vendido:  "<<var3<<endl;
		cout<<setprecision(5)<<" Terreno  "<<tp7<<endl;
		cout<<setprecision(5)<<" Casa "<<tp8<<endl;
		cout<<setprecision(5)<<" Departamento   "<<tp9<<endl;
		cout<<" "<<endl;
		cout<<"zona B:  "<<"  total vendido:  "<<var4<<endl;
		cout<<setprecision(5)<<" Terreno  "<<tp10<<endl;
		cout<<setprecision(5)<<" Casa "<<tp11<<endl;
		cout<<setprecision(5)<<" Departamento   "<<tp12<<endl;
		cout<<" "<<endl;
		cout<<"zona c:  "<<"  total vendido:  "<<var5<<endl;
		cout<<setprecision(5)<<" Terreno  "<<tp13<<endl;
		cout<<setprecision(5)<<" Casa "<<tp14<<endl;
		cout<<setprecision(5)<<" Departamento   "<<tp15<<endl;
		cout<<"----------------------------------------------------------"<<endl;
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}		
	
	
}
