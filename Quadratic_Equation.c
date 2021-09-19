#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	float d,m,n;
	printf("We have a Quadratic Equation : a*x*x + b*x + c ");
	printf("\nEnter The Value of a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	
	d = b*b - 4*a*c ;
	m = (-b + sqrt(d))/2*a;
	n = (-b - sqrt(d))/2*a;
	
	printf("Roots of Quadratic Equation is %.2f , %.2f ",m,n);
}
