#include<stdio.h>
#include<conio.h>

void main()
{
	int t,i=0,j=0,count=0,max,min;
	scanf("%d",&t);
	   
	int a[t];
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<t;j++)
	{
		for(i=0;i<t;i++)
		{
			if(a[j]>=a[i])
			{
				count++;
			}
		}
		if(count==t)
		{
			max=a[j];
		}
		if(count==1)
		{
			min=a[j];
		}
	}
	printf("The Sum Of Smallest Number %d and Largest Number %d  = %d",min,max,(min+max));
}
