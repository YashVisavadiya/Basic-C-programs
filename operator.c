#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b;
	char c;
	
	printf("Enter two integer : ");
	scanf("%f %f",&a,&b);
	printf("Enter a operator :");
	c=getch();
	printf("%c",c);
	
	switch (c)
	{
		case '+' :
			printf("\nAnswer is %.2f",a+b);
			break;
		case '-' :
			printf("\nAnswer is %.2f",a-b);
			break;
		case '*' :
			printf("\nAnswer is %.2f",a*b);
			break;
		case '/' :
			printf("\nAnswer is %.2f",a/b);
			break;
		case '%' :
			printf("\nAnswer is %.2f Percentage",((a/b)*100));
			break;
		default:
			printf("\nEnter valid operator");
			break;									
	}
}


