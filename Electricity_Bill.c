#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	float bill=0;
	
	printf("Enter The Units Consumed : ");
	scanf("%d",&n);
	
	if(n<50)
	{
		bill = bill + n * 3.50 ;
	}
	else if( n > 50 && n <= 150 )
	{
		bill = bill + 50 * 3.50 ;
		n = n - 50 ;
		bill = bill  + n * 4.00 ;
	}
	else if( n > 150 && n <= 250 )
	{
		bill = bill + 50 * 3.50 ;
		n = n - 50 ;
		bill = bill + 100 * 4.00 ;
		n = n - 100 ;
		bill = bill + n * 5.20 ;
	}
	else if( n > 250 )
	{
		bill = bill + 50 * 3.50 ;
		n = n - 50 ;
		bill = bill + 100 * 4.00 ;
		n = n - 100 ;
		bill = bill + 100 * 5.20 ;
		n = n - 100 ;
		bill = bill + n * 6.50 ;
	}
	printf("Electricity Bill = %.2f Rupees ",bill);
}
