#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int sel;
float base, alt, rad, rec, tri, cir, pi;

cout<<"ingrese una figura: "<<endl;
cout<<"1. cuadrado: "<<endl;
cout<<"2. rectangulo: "<<endl;
cout<<"3. triangulo: "<<endl;
cout<<"4. circulo: "<<endl;
cin>>sel;

switch(sel)
{
case 1: cout<<"ingrese la base: "<<endl;
cin>>base;
cout<<"el area del cuadrado es: "<<base<<endl;
break;

case 2: cout<<"ingrese el area del rectangulo: "<<endl;
cin>>base;
cout<<"ingrese la altura del rectangulo: "<<endl;
cin>>alt;
rec=base*alt;
cout<<"el area del rectangulo es: "<<rec<<endl;
break;

case 3: cout<<"ingrese la base del triangulo: "<<endl;
cin>>base;
cout<<"ingrese la altura del triangulo: "<<endl;
cin>>alt;
tri=(base*alt)/2;
cout<<"el area de un triangulo es: "<<tri<<endl;
break;

case 4: cout<<"ingrese el radio del circulo: "<<endl;
cin>>rad;
pi=3,1416;
cir=pi*(rad*rad);
cout<<"el area del circulo es: "<<cir<<endl;
break;

default: cout<<"la opcion es invalida"<<endl;
}
getch();
}