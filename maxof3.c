#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d ",&a,&b,&c);

    if(a>b && a>c)
        printf("\n%d",a);
    else if(b>a && b>c)
        printf("\n%d",b);
    else
        printf("\n%d",c);
}