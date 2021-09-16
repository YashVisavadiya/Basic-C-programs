#include<stdio.h>
#include<conio.h>

void main()
{
	int t,n,i,count=0,j;
	
	scanf("%d",&t);
	
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&j);
		a[j-1] = a[j-1]+1;
		
		for(i=0;i<n-1;i++)
		{
			if(a[i+1] == a[i] + 1)
			{	
				count++;	
			}
		}
		if(count==n-1)
			printf("\nFirst\n");	
		else
			printf("\nSecond\n");
//		for(i=0;i<n;i++)
//		{
//			printf("%d",a[i]);
//		}
	}
}
