/* C program to print your name , birthdate & mobile number*/

#include<stdio.h>
#include<conio.h>

void main() 
{
	char name[100];
	int date,month,year,number=0,s;
	
	printf("Enter your name : ");
	gets(name);
	printf("Enter your Birth date , month , year respectively : ");
	scanf("%d %d %d", &date, &month, &year);
	printf("Enter your Mobile Number : ");
	scanf("%d",&number);
	
	printf("\nYour Name is %s",name);
	printf("\nYour Birthdate is %d/%d/%d",date,month,year);
	
	//s=(number>=1000000000 && number<=9999999999) ? 1:0;
	//if(s==1)
		printf("\nYour Mobile Number is %d",number);
//	else
//		printf("\nEnter a Valid number ");
	getch();
}

