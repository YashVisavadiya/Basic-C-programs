/* Calculate The sum of two integers */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("\nEnter The First Integer : ");
	scanf("%d",&a);
	printf("\nEnter The Second Integer : ");
	scanf("%d",&b);
	a+=b;
	printf("\nSum Of The Above Two Integers : %d",a);
	getch();
}
