/* Total Cost of a Car */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	// Excise Duty(14%)
	//Sales Tax(12%)
	//Octori(4%)
	//Road Tax(1.5%)
	printf("\nEnter total amount : ");
	scanf("%d",&a);
	b=a+a*0.215;
	printf("\nTotal Cost : %d",b);
	getch();
}
