#include<stdio.h>

void main()
{
    int num;
    printf("Enter a Number to check Positive or Negative : ");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("\nPositive ");
    }
    else
    {
        printf("\nNegative");
    }
}