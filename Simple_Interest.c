#include<stdio.h>
#include<conio.h>


int main()
{
	int principal_amount,time;
	float rate,simple_interest;
	
	printf("\nEnter Principal (Amount) : ");
	scanf("%d",&principal_amount);
	printf("\nEnter Rate : ");
	scanf("%f",&rate);
	printf("\nEnter Time (in Years) : ");
	scanf("%d",&time);
	
	simple_interest = (principal_amount * rate * time) / 100.00;
	
	printf("The value of simple interest %.2f",simple_interest);
	return 0;
}
