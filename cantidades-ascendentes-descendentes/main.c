#include <stdio.h>
#include <conio.h>
 
int main()
{
int a,b,c,d=0,e;
while(d==0){
printf("\nInserte 3 numeros separados por un espacio\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&b>c)printf("Descendent?e: %d, %d, %d\nAscedente: %d, %d, %d\n",a,b,c,c,b,a);
else if(a>=c&&c>=b)printf("Descende?nte: %d, %d, %d\nAscedente: %d, %d, %d\n",a,c,b,b,c,a);
else if(b>=a&&a>=c)printf("Descende?nte: %d, %d, %d\nAscedente: %d, %d, %d\n",b,a,c,c,a,b);
else if(b>=c&&c>=a)printf("Descende?nte: %d, %d, %d\nAscedente: %d, %d, %d\n",b,c,a,a,c,b);
else if(c>=a&&a>=b)printf("Descende?nte: %d, %d, %d\nAscedente: %d, %d, %d\n",c,a,b,b,a,c);
else if(c>=b&&b>=a)printf("Descende?nte: %d, %d, %d\nAscedente: %d, %d, %d\n",c,b,a,a,b,c);
printf("Presione S para salir o C para continuar\n");
e=getche();
if(e!='c'&&e!='C'&&e!='s'&&e!=?'S'){
do{
printf("\nError, intente otra vez\n");
e=getche();
}while(e!='c'&&e!='C'&&e!='s'&?&e!='S');
}
if(e=='s'||e=='S')d=1;
}
return 0;
}