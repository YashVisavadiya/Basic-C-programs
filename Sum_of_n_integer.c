#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum + i ;
	}
	printf("Sum of first %d Natural Numbers = %d",n,sum);
}
