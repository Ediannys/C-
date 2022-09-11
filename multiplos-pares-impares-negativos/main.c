#include <iostream.h>
#include <conio.h>
 
void main(){
int a,b,c,d,e,g,h,i;
float f=0;
cout<<"Ingrese el 1er numero: ";
cin>>a;
cout<<"Ingrese el 2do numero: ";
cin>>b;
cout<<"Ingrese el 3er numero: ";
cin>>c;
cout<<"Ingrese el 4to numero: ";
cin>>d;
cout<<"Ingrese el 5to numero: ";
cin>>e;
if(a%3==0)f=a;
if(b%3==0)f+=b;
if(c%3==0)f+=c;
if(d%3==0)f+=d;
if(e%3==0)f+=e;
cout<<"La suma de los multiplos de 3 es "<<f<<endl;
g=f;
f=0;
if(a%2==0)f=-a;
if(b%2==0)f-=b;
if(c%2==0)f-=c;
if(d%2==0)f-=d;
if(e%2==0)f-=e;
cout<<"La resta de los numeros pares es "<<f<<endl;
h=f;
f=1;
if(a%2==1)f=a;
if(b%2==1)f*=b;
if(c%2==1)f*=c;
if(d%2==1)f*=d;
if(e%2==1)f*=e;
cout<<"La multiplicacion de los numeros impares es "<<f<<endl;
i=f;
f=1;
if(a<0)f=a;
if(b<0)f*=b;
if(c<0)f*=c;
if(d<0)f*=d;
if(e<0)f*=e;
cout<<"La division de los numeros negativos es 1/"<<f<<endl;
cout<<"El resultado de la operacion es "<<((g+h)*i)/f<<endl;
cout<<"Presione cualquier tecla para salir";
getche();
}