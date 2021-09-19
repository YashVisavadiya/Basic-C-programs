#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a Number (0-9) : ");
	scanf("%d",&n);
	
	switch (n)
	{
		case 0 :
			printf("\nZero");
			break;
		case 1 :
			printf("\nOne");
			break;
		case 2 :
			printf("\nTwo");
			break;
		case 3 :
			printf("\nThree");
			break;
		case 4 :
			printf("\nFour");
			break;
		case 5 :
			printf("\nFive");
			break;
		case 6 :
			printf("\nSix");
			break;
		case 7 :
			printf("\nSeven");
			break;
		case 8 :
			printf("\nEight");
			break;
		case 9 :
			printf("\nNine");
			break;
		default :
			printf("\nMore than 9");
			break;
	}
}

