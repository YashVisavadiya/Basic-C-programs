#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a Year : ");
	scanf("%d",&n);
	
	if( n % 4 == 0 )
	{
		if( n % 100 != 0  )
		{
			printf("\nLeap Year");
		}
		if( n % 100 == 0 )
		{
			if( n % 400 == 0 )
			{
				printf("\nLeap Year");
			}
		}
	}
	else
	{
		printf("\nNot a Leap Year");
	}
}
