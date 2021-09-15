/* Swaping of Two numbers without usimg a third variable */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("\nEnter Value of a : ");
	scanf("%d",&a);
	printf("\nEnter value of b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swaping : a = %d , b = %d ",a,b);
}
