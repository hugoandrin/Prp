#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
void selectionSort(int arr[]);
int main(){
	int i,n=4,x;
	int ar[5];
	ofstream a;
	a.open("datos.txt",ios::out);
	for(i=0;i<=n;i++){
		cout<<"Ingrese Datos: "<<endl;
		cin>>x;
		a<<x<<endl;
	}
	a.close();
	
	ifstream b;
	b.open("datos.txt",ios::in);
	i=0;
	while (b>>ar[i]){
		i++;
	}
	cout << "ARRAY Desordenado: " << endl;
	for(i=0;i<=n;i++){
		cout<<ar[i]<<endl;
	}
	b.close();	
	
	selectionSort(ar);
	
	cout << "ARRAY Ordenado: " << endl;
  	for (int i = 0; i < 5; i++) {
    	cout << ar[i] << "  ";
  	}
	
}

void selectionSort(int arr[]) {
  for (int i = 0; i < 4; i++) {
    int min = i;
 
    for (int j = i + 1; j < 5; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}
