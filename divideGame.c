#include<stdio.h>
#include<conio.h>

void main()
{
	int number,fractionNumber,i,count=0,check;
	
	printf("Enter a Number : ");
	scanf("%d",&number);
	printf("Enter Fraction Number : ");
	scanf("%d",&fractionNumber);
	
	for( i=2;i<=fractionNumber;i++ )
	{
		check=fractionNumber%i;
		if(check==0)
		{
			if(number%i==0)
			{
				count++;
				break;
			}
		}
	}
	if(count>0)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
		
}

