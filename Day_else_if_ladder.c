#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter Week Number (1-7) : ");
	scanf("%d",&n);
	
	if(n==1)
		printf("\nMonday");
	else if(n==2)
		printf("\nTuesday");
	else if(n==3)
		printf("\nWednesday");
	else if(n==4)
		printf("\nThursday");
	else if(n==5)
		printf("\nFriday");
	else if(n==6)
		printf("\nSaturday");
	else if(n==7)
		printf("\nSunday");
	else
		printf("\nInvalid Input ! Please Enter Number Between 1-7 ");
}
