#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter an Integer : ");
	scanf("%d",&n);
	
	if( n & 1 == 1 )
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
}
