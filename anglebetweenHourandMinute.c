#include <stdio.h>

float angleofhourhand(int h, int m)
{
    float ansh = 0;
    int hour = h;
    int min = m;

    ansh=h*30;
    for(int i=0;i<min;i++)
    {
        ansh+=0.5;
    }

    if (ansh >= 360)
    {
        ansh = ansh - 360;
    }
    return ansh;
}

float angleofminhand(int h, int m)
{
    int ansm = 0;
    int min = m;

    ansm=m*6;

    return ansm;
}

void anglebetweenHourhandandMinhand(int h, int m)
{
    float angleofhour = angleofhourhand(h, m);
    float angleofmin = angleofminhand(h, m);
    float anglebetweenHourandMin;

    if (angleofhour > angleofmin)
    {
        anglebetweenHourandMin = angleofhour - angleofmin;
    }
    else
    {
        anglebetweenHourandMin = angleofmin - angleofhour;
    }

    if (anglebetweenHourandMin > 180)
    {
        anglebetweenHourandMin = 360 - anglebetweenHourandMin;
    }

    printf("\n%.2f Degree ", anglebetweenHourandMin);
}

void main()
{
    int h, m;

    printf("Enter Hour : ");
    scanf("%d", &h);
    printf("Enter Min : ");
    scanf("%d", &m);

    anglebetweenHourhandandMinhand(h, m);
}
