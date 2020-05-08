#include<iostream>

using namespace std;
main() { 
   int *p = new int; 
   delete p; 
   delete p;
    
   cout<<"Done";
}

