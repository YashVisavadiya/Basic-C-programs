/* Calculate the power of a number */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,m=1,i;
	
	printf("\nEnter the base number : ");
	scanf("%d",&a);
	printf("\nEnter the exponent value : ");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		m=a*m;
	}
	printf("\nAnswer : %d",m);
	getch();
}
