/* C Program to compute the perimeter of a circle */

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	float radius,perimeter;
	printf("Enter The Radius of a Circle : ");
	scanf("%f",&radius);
	perimeter=2*PI*radius;
	printf("The Perimeter of Given Circle is %.2f",perimeter);
	getch();
	
}
