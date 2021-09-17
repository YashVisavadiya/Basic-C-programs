#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],n,i;
	a[0]=0;
	a[1]=1;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		if(i==0||i==1)
		{
			printf("%d ",a[i]);
		}
		else
		{
			a[i] = a[i - 1] + a[i - 2];
			printf("%d ",a[i]);
		}
	}
}
