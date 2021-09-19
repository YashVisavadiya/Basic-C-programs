/* Print Employee's ID and Salary */

#include<stdio.h>
#include<conio.h>

void main()
{
	int id;
	float w,s,a;
	
	printf("\nEnter Employees ID : ");
	scanf("%d",&id);
	printf("\nInput Working Hours : ");
	scanf("%d",&w);
	printf("\nSalary Amount / Hour :");
	scanf("%f",&a);
	
	s=w*a;
	
	printf("\nEmployees ID = %d",id);
	printf("\nSalary = %.2f",s);
	getch();
}
