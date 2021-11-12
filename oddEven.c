#include<stdio.h>

void main()
{
    int Number;

    printf("Enter a number to check wheather a given number is odd or even : ");
    scanf("%d",&Number);

    if(Number%2==0)
        printf("Even");
    else
        printf("Odd");
}