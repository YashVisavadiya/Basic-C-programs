#include<stdio.h>

void main()
{
	float km,m,cm,feet,inch;
	printf("Enter distance in Kilometer : ");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	feet=30.48*cm;
	inch=2.54*cm;
	printf("\nDistance in Meter is %.2f",m);
	printf("\nDistance in Centimeter is %.2f",cm);
	printf("\nDistance in Feet is %.2f",feet);
	printf("\nDistance in Inches is %.2f",inch);
}
