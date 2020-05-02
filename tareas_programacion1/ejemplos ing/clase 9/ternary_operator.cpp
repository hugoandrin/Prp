#include <fstream> 
#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int x = 0, y =0,r=0,z=0;
	//cout<<"Ingrese X:       Ingrese Y:"<<endl;
	cout<<"Ingrese X:       Ingrese Y:   Ingrese Z:"<<endl;
	//cin>>setw(2)>>x>>setw(2)>>y>>setw(2)>>z;
	cin>>x;
	cin>>y;
	cin>>z;
	//cout<<"El mayor es 2 numeros es: "<<(x>y ? x:y)<<endl;
	//if (x>y)
	//	cout<<"El mayor es 2 numeros es: "<<x<<endl;
	//else
	//	cout<<"El mayor es 2 numeros es: "<<y<<endl;
	r=(x>y) ? (x>z ? x:z):(y>z ? y:z);
	
	cout<<"El mayor es 3 numeros es: "<<r<<endl;
	
	//((x>y) ? (x>z ? x:z):(y>z ? y:z))
	//
}


