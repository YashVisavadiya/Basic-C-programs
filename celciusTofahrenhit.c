#include<stdio.h>

void main()
{
	float cel,fer;
	
	printf("Enter Temperature in Celcius : ");
	scanf("%f",&cel);
	
	printf("Temperature in Fahrenhit is %f ",( ( (1.8) * cel ) + 32 ) );
}
