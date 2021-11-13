#include<stdio.h>

void main()
{
    int a,b,c;
    float root1,root2;

    printf("ax^2 + bx + c \n");
    printf("Enter a,b,c respectively : ");
    scanf("%d %d %d",&a,&b,&c);

    root1=((-b)+sqrt( (b*b) - (4*a*c) )) / (2*a) ;
    root2=((-b)-sqrt( (b*b) - (4*a*c) )) / (2*a) ;

    printf("First Root is %.2f ",root1);
    printf("\nSecond Root is %.2f ",root2);

}
