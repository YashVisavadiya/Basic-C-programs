#include<stdio.h>

void main()
{
	float cel,fer;
	
	printf("Enter Temperature in Fahrenhit : ");
	scanf("%f",&fer);
	
	printf("Temperature in Celcius is %f ",( fer - 32 )/1.8 );
	
}
