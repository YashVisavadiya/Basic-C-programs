/*  Sum of numbers which randomly enters user */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,sum=0;
	printf("NOTE THAT WHEN YOU COMPLETE ENTERING NUMBER ENTER 0\n");
	printf("\nEnter Numbers that you want to sum ");
	
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(a[i]==0)
		break;
	}
	printf("\nSum is %d",sum);
	
}
