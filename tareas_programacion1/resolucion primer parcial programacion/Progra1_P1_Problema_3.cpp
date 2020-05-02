/*									Ejercicio # 3 - 2 puntos.

A un trabajador le pagan según las horas trabajadas y la tarifa está determinada a un valor de Q36.00 por hora trabajada.  
Si la cantidad de horas extras es mayor a 40 horas, la tarifa se incrementará un 25% para las horas extras. Realice un programa que, 
al ingresar las horas trabajadas, que calcule el salario del trabajador y la tarifa de horas extras.		*/


/* Como no se especifica si el empleado tiene contrato o no se va a asumir que unicamente se le paga por hora trabajada, no se brindaran 
bonos de ley ni se calcularan prestaciones adicionales, unicamente el calculo de horas trabajadas conforme a lo descrito, tampoco se
tomara en cuenta las jornadas laborales, unicamente se pedira que se especifique que tipo de hora trabajo*/

//Hugo Estuardo Andrino Duque		Carnet:9941-19-23714

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;


void programa();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	setlocale(LC_CTYPE,"Spanish");
	
		programa();	
	
		  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void programa(){
			string ret;
			
			do{
		
			int horastrab=0, horasext=0, totalhoras=0;
			string nombre;
			int Qnormal=36;	//Q36 por cada hora laborada
			int Qextra=45;	//Los 45 equivalen a la hora normal de Q36 mas el 25% que equivale a Q9 mas, (25/100)*36=9
			float x=0,y=0,z=0,a=0,b=0,c=0;
			
			system("CLS");
			system("color 70");
			cout<<"\n \t \t \t \t \t  Ejercicio # 3---Calculo de Sueldo---"<<endl;
			cout<<"\n \t  Por favor ingrese el Nombre del empleado: "<<endl;
			fflush(stdin);
			cout<<"\n \t "; getline(cin,nombre,'\n');
			fflush(stdin);
			cout<<"\n \t Por favor ingrese la cantidad de horas normales trabajadas por el empleado: "<<endl;
			cout<<"\n \t "; cin>>horastrab;
			fflush(stdin);
			cout<<"\n \t Por favor ingrese la cantidad de horas extras trabajadas por el empleado: "<<endl;
			cout<<"\n \t "; cin>>horasext;
			fflush(stdin);
					if(horasext>40){			
												x=1440;					/*total en Q equivalente a 40 horas extra*/		
												y=horasext-40;			/*ingreso de horas extra menos 40 que era el tope sin incremento*/	
												z=y*Qextra;				/*El excedente de horas extras multiplicado por el valor con 25% extra*/	
												a=z+x;					/*total del excedente en horas extra en Q mas las 40 horas tope en Q*/
												b=horastrab*Qnormal; 	/*calculo de horas normales en Q*/
												c=b+a;					/*suma en Q de las horas normales y las extra*/
									}
									
					if(horasext<=40){			
												a=horasext*Qnormal;		/*calculo en Q de las horas extras sin aumento del 25%*/
												b=horastrab*Qnormal;	/*calculo de horas normales en Q*/
												c=b+a;					/*suma en Q de las horas normales y las extra*/
												
									}
			
			cout<<"\n \t  "<<endl;						
			cout<<"\n \t _________________________________________________"<<endl;
			cout<<"\n \t Nombre empleado: "<<nombre<<endl;
			cout<<"\n \t Horas simples: "<<horastrab<<endl;
			cout<<"\n \t Horas extra: "<<horasext<<endl;
			cout<<"\n \t Total en Quetzales horas simples: "<<"Q"<<b<<endl;
			cout<<"\n \t Total en Quetzales horas extra: "<<"Q"<<a<<endl;
			cout<<"\n \t Total a pagar: "<<"Q"<<c<<endl;
			cout<<"\n \t _________________________________________________"<<endl;		
			
			cout<<"\n \t Desea realizar otro calculo? si/no"<<endl;
			cout<<"\n \t "; cin>>ret;
	
			} while(ret=="si");
}
