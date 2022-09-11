#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
int main() {
int a,b,c,d=0;
char e;
while(d==0){
b=0;
printf("Inserte un numero\n");scanf("%d",&c);
printf("El numero es divisible entre: ");
for(a=1;a<=c;a++){
if(c%a==0){
b++;
printf("%d ",a);
}
}
if(b>2)printf("\nPor lo tanto, es compuesto.\n");
else printf("\nPor lo tanto, es primo.\n");
printf("\nPresione S para salir o C para continuar\n");
e=getche();
while(e!='s'&&e!='S'&&e!='c'&&?e!='C'){
printf("\nError, intente ottra vez\n");e=getche();
}
if(e=='s'||e=='S')d=1;
system("CLS");
}
return 0;
}