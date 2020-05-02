//programa que ve las ventas de 10 locales y calcula promedios y ve quien vende mas

//#include<conio.h>
#include<stdio.h>
#include<iostream>
//#include<stdlib.h>

double lc1,lc2,lc3,lc4,lc5,lc6,lc7,lc8,lc9,lc10;
int promedio,totalmes, menu, ret, salir;

using namespace std;

main(){
	
	do{
	
	
	 system("CLS");
     system( "color 70");
     cout<<"\n Ejercicio numero 2, 10 almacenes"<<endl;
     cout<<"\n por favor elija una de las siguientes opciones: \n"<<endl;
     cout<<"\n 1. Ingreso de las cantidades vendidas al mes por cada almacen \n"<<endl;
     cout<<"\n 2. Quien vendio mas \n"<<endl;

     cin>>menu;

     system("CLS");

     switch(menu){

        case 1:
        		  cout<<"\n Ingreso de las ventas mensuales \n"<<endl;
        		  cout<<"\n Por favor ingrese las ventas del almacen 1 \n"<<endl;
        		  cin>>lc1;
        		  cout<<"\n Por favor ingrese las ventas del almacen 2 \n"<<endl;
        		  cin>>lc2;
        		  cout<<"\n Por favor ingrese las ventas del almacen 3 \n"<<endl;
        		  cin>>lc3;
        		  cout<<"\n Por favor ingrese las ventas del almacen 4 \n"<<endl;
        		  cin>>lc4;
        		  cout<<"\n Por favor ingrese las ventas del almacen 5 \n"<<endl;
        		  cin>>lc5;
        		  cout<<"\n Por favor ingrese las ventas del almacen 6 \n"<<endl;
        		  cin>>lc6;
        		  cout<<"\n Por favor ingrese las ventas del almacen 7 \n"<<endl;
        		  cin>>lc7;
        		  cout<<"\n Por favor ingrese las ventas del almacen 8 \n"<<endl;
        		  cin>>lc8;
        		  cout<<"\n Por favor ingrese las ventas del almacen 9 \n"<<endl;
        		  cin>>lc9;
        		  cout<<"\n Por favor ingrese las ventas del almacen 10 \n"<<endl;
        		  cin>>lc10;
        		  
        		  cout<<"  "<<endl;
        		  
        		  cout<<"El total de ventas en el mes fue de:	"<<endl;
        		  cout<<"  "<<endl;
        		  totalmes=lc1+lc2+lc3+lc4+lc5+lc6+lc7+lc8+lc9+lc10;
        		  cout<<totalmes<<endl;
        		  cout<<"  "<<endl;
        		  cout<<"El promedio total de ventas fue de :"<<endl;
        		  promedio=totalmes/10;
        		  cout<<"  "<<endl;
        		  cout<<promedio<<endl;
        		  
                  break;
                  

        case 2:
        	      cout<<"\n Que almacen vendio mas \n"<<endl;
        	      
        	     		//for (i=1; i<TAM; i++)
         				//for j=0 ; j<TAM - 1; j++)
              			//if (lista[j] > lista[j+1])
                   		//temp = lista[j];
                   		//lista[j] = lista[j+1];
                   		//lista[j+1] = temp;
        	      
        	      break;
        	      
   
        default :

                  cout<<"\n Opcion ingresada incorrecta \n"<<endl;


     					}
		cout<<"\n Desea volver al menu principal? si lo desea presione 1, para salir presione 0 \n";
      cin>>ret;

 } while(ret!=0);

 system("PAUSE");


 return 0;

}
	
