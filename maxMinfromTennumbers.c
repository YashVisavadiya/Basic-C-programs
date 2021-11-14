#include<stdio.h>
#include<math.h>

void main()
{
    int num[10];
    printf("Enter ten Numbers : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=-9999999;
    int min=9999999;

    for(int i=0;i<10;i++)
    {
        max=max>num[i]?max:num[i];
        min=min<num[i]?min:num[i];
    }
    printf("\nMax Number is %d \n",max);
    printf("Minimum Number is %d ",min);
}
