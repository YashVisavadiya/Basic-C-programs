#include<stdio.h>

void main()
{
	float principle_amount,rateofInterest,time;
	printf("Enter amount : ");
	scanf("%f",&principle_amount);
	printf("Enter rate of Interest : ");
	scanf("%f",&rateofInterest);
	printf("Enter Time period in Year :");
	scanf("%f",&time);
	printf("Simple Interest is %f",(principle_amount*rateofInterest*time));
	
}
