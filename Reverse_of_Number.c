#include<stdio.h>
#include<conio.h>

void main()
{
	int rev=0,rem,n;
	printf("Enter any Number to find Reverse : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n % 10 ;
		n = n / 10 ;
		rev = rev * 10 + rem ;
	}
	printf("Reverse : %d",rev);
}
