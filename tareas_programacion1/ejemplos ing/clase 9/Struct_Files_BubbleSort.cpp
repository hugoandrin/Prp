#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct emp
{
	int num ; //clave de ordenamiento
	string name ;
	string age ;
	string bs ;
};

void bubbleSort(emp list[], int tam);

int main( )
{
	ifstream fp;
    string Tmp;
	fp.open("emp.txt");
	emp emp_array[5];

	if (fp)
	{	
   		for (int counter = 0; counter < 5; counter++)
    	{
        	fp >> emp_array[counter].num;
        	fp >> emp_array[counter].name;
        	fp >> emp_array[counter].age;
        	fp >> emp_array[counter].bs;
    	}
	}
	else
    	puts("error"); //

	bubbleSort(emp_array, 5);
                
	for (int counter = 0; counter < 5; counter++)
	{
   	 	cout << emp_array[counter].num << "\t";
   	 	cout << emp_array[counter].name << "\t";
   	 	cout << emp_array[counter].age << "\t";
  	  	cout << emp_array[counter].bs << endl;
	}
}

void bubbleSort(emp list[], int tam)
{
    emp temp;
    int i;
    int index;
    for (i = 1; i < tam; i++)
    {
     	cout<<"i: posicion actual antes"<<list[i].num<<endl;
	    for (index = 0; index < tam - i; index++)
            if (list[index].num > list[index + 1].num)
            {
            	cout<<"Posicion de intercambio:  "<<endl;
                temp = list[index];
                cout<<"var temp"<<temp.num<<endl;
                list[index] =  list[index + 1];
                cout<<" list[index+1]  " << list[index+1].num<<endl;
                list[index + 1] =  temp;
            }
        cout<<"i: posicion actual despues"<<list[i].num<<endl;
    }
}
//a num  nombre edad bs
/*
0 1  
1 4   
2 6
3 9
4 12
*/
