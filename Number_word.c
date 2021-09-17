#include<stdio.h>
#include<conio.h>

void main(){
	int n,rev=0,rem;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem = n % 10 ;
		n = n / 10 ;
		rev = rev * 10 + rem ;
//		printf("\n%d %d\n",rem,rev);
	}
//	printf("%d",rev);
	while(rev>0)
	{
		rem=rev%10;
		rev=rev/10;
//		printf("\n%d %d\n",rem,rev);
		switch (rem)
	{
		case 0 :
			printf("Zero ");
			break;
		case 1 :
			printf("One ");
			break;
		case 2 :
			printf("Two ");
			break;
		case 3 :
			printf("Three ");
			break;
		case 4 :
			printf("Four ");
			break;
		case 5 :
			printf("Five ");
			break;
		case 6 :
			printf("Six ");
			break;
		case 7 :
			printf("Seven ");
			break;
		case 8 :
			printf("Eight ");
			break;
		case 9 :
			printf("Nine ");
			break;
		default :
			break;
	}
	}
}
