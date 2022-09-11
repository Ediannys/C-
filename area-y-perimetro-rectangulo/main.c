#include <iostream.h>
#include<conio.h>
#include<stdio.h>
  void main ()
{ int base, altura, area, perimetro;
  cout<<"ingrese la altura:"<<endl;
  cin>>altura;
  cout<<"ingrese la base:"<<endl;
  cin>>base;
  area = base*altura;
  perimetro = (2*base)+(2*altura);
  cout<<"el area es: "<<area<<" "<<endl;
  cout<<"el perimetro es:"<<perimetro<<" "<<endl;
  getch();
}