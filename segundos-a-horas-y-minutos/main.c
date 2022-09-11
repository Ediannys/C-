#include <iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 long int hora, min, seg;
 cout<<"ingresa los segundos"<<endl;
 cin>>seg;
 min=seg/60;
 hora=min/60;
 cout<<seg<<" segundos tiene:"<<min<<" minutos"<<endl;
 cout<<seg<<" segundos tiene:"<<hora<<" horas"<<endl;
 getch();
 }