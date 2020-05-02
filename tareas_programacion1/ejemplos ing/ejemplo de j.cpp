#include <iostream>
#include <conio.h>

using namespace std;
int main (void) {
	
int N, contadorM=0, contadorF=0;
char genero;
double pesoM, alturaM, edadM,pesoF,alturaF, edadF, pesoMAcumulado=0, alturaMAcumulado=0, edadMAcumulado=0, pesoFAcumulado=0, 
alturaFAcumulado=0, edadFAcumulado=0, promedioPesoM, promedioAlturaM, promedioEdadM, promedioPesoF, promedioAlturaF, promedioEdadF;

cout<<"ingrese la cantidad de personas a evaluar: "<<endl;
cin>>N;

for(int i=1; i<=N; i++){
	cout<<"\ningrese el genero de la persona (F) (M): "<<endl;
	cin>>genero;
	
	//datos de los hombres
	if(genero=='M'|| genero=='m'){
		cout<<"\ningrese el peso: "<<endl;
		cin>>pesoM;
			pesoMAcumulado=pesoMAcumulado + pesoM;
		
		cout<<"\ningrese la altura: "<<endl;
		cin>>alturaM;
			alturaMAcumulado=alturaMAcumulado + alturaM;
		
		cout<<"\ningrese la edad: "<<endl;
		cin>>edadM;	
			edadMAcumulado=edadMAcumulado+edadM;
			contadorM++;
	}
	//datos de las mujeres 
	else if(genero=='F' || genero=='f'){
		cout<<"\ningrese el peso: "<<endl;
		cin>>pesoF;
			pesoFAcumulado=pesoFAcumulado + pesoF;
		
		cout<<"\ningrese la altura: "<<endl;
		cin>>alturaF;
			alturaFAcumulado=alturaFAcumulado + alturaF;
		
		cout<<"\ningrese la edad: "<<endl;
		cin>>edadF;
			edadFAcumulado=edadFAcumulado+edadF;
		contadorF++;
			}
			
			else{
				cout<<"el genero no es correcto, ingrese la letra M o F: "<<endl;
			}
	}
	
	promedioPesoM=pesoMAcumulado/contadorM;
	promedioPesoF=pesoFAcumulado/contadorF;
	
	promedioAlturaM=alturaMAcumulado/contadorM;
	promedioAlturaF=alturaFAcumulado/contadorF;
	
	promedioEdadM=edadMAcumulado/contadorM;
	promedioEdadF=edadFAcumulado/contadorF;
	
	cout<<"El promedio de Peso de los hombres es: "<<	promedioPesoM<<endl;
	cout<<"El promedio de Peso de las mujeres es: "<<	promedioPesoF<<endl;
	
	cout<<"El promedio de Altura de los hombres es: "<<promedioAlturaM<<endl;
	cout<<"El promedio de Altura de las mujeres es: "<<promedioAlturaF<<endl;
	
	cout<<"El promedio de la Edad de los hombres es: "<<promedioEdadM<<endl;
	cout<<"El promedio de la Edad de las mujeres es: "<<promedioEdadF<<endl;
	


return 0;
getch ();
}
