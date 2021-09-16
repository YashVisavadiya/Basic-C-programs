#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,x,y,n,k=1,count=1;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if( a[j] == a[i] + 1 )
			{
				for( x=0;x<n;x++ )
				{
					if( a[j] == a[x] + 1 )
					{
						count++;
					}
				}
			}
		}
	}
	printf("\n%d",count);
}
