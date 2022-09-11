#include <iostream> //.h en TC++ 
#include <conio.h>
  using namespace std; // borrar esta linea en TC++
  main(){   // colocar void antes de main en TC++
    unsigned long long int n;
    int i;   
    cout<<"Ingrese Numero: ";
    cin>>n;
    if(n==0)
    n++;
    for(i=n-1;i>0;i--)
    n*=i;
    cout<<"El factorial del numero es: "<<n;
getch();
}