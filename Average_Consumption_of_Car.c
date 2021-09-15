/*    Average Consumption of Car    */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	float b,c;
	
	printf("\nInput total distance in km : ");
	scanf("%d",&a);
	printf("\nInput Total Fuel spent in Liters : ");
	scanf("%f",&b);
	
	c=a/b;
	
	printf("\nAverage Consumption (km/lt) : %.2f",c);
	getch();	
}
