#include<stdio.h>

void main()
{
    int year;

    printf("Enter a Year : ");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        if(year % 400 == 0)
        {
            printf("Leap Year ");
        }
        else if(year % 100 != 0)
        {
            printf("Leap Year ");
        }
        else
        {
            printf("Not a Leap Year ");
        }
    }
    else
    {
        printf("Not a Leap Year ");
    }

}