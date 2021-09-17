#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0,i=1,j=1,factorial=1;
	printf("Enter n : ");
	scanf("%d",&n);

	for(j=1;j<=n;j++)
	{
		factorial=1;
		for(i=1;i<=j;i++)
		{
			factorial=factorial*i;
		}
		sum=sum+factorial;	
	}
	printf("%d",sum);
}
