#include<iostream.h>
void main()
{
	 int a, b, c, A, B, C;
	 cout << "Introduce lado 1: "; cin >> a;
	 cout << "Introduce lado 2: "; cin >> b;
	 cout << "Introduce lado 3: "; cin >> c;
	 A = (b*b+c*c-a*a);
	 B = (a*a+c*c-b*b);
	 C = (a*a+b*b-c*c);
	 if(A == 0 || B == 0 || C == 0)
		  cout << "El triangulo es rectangulo. ";
	 if(A > 0 && B > 0 && C > 0)
		  cout << "El triangulo es acutangulo. ";
	 if(A < 0 || B < 0 || C < 0)
		  cout << "El triangulo es obtusangulo. ";

}