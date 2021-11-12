#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter a Two Numbers : ");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("\n%d",a);
    else
        printf("\n%d",b);

}