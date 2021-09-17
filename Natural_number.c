//  Write a C program to print all natural numbers from 1 to n

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	printf("\nNatural Numbers from 1 to %d :\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
}
