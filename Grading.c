#include<stdio.h>
#include<conio.h>

void main()
{
	float p,c,m,average,percentage;
	
	printf("Enter marks of Physics , Chemistry ,Mathematics out of 100 : ");
	scanf("%f %f %f",&p ,&c ,&m );
	
	percentage = ( ( p + c + m ) / 300) * 100 ;
	average = ( p + c + m ) / 3 ;
	
	printf("\nPercentage = %.2f",percentage);
	printf("\nAverage Marks = %.2f",average);
	
	if(percentage>=80)
	{
		printf("\nA GRADE");
	}
	else if(percentage>=60)
	{
		printf("\nB GRADE");
	}
	else if(percentage>=40)
	{
		printf("\nC GRADE");
	}
	else if(percentage<=39)
	{
		printf("\nFAIL");
	}
}
