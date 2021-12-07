#include <stdio.h>

int angleofhourhand(int h, int m)
{
    int ansh = 0;
    int hour = h;
    int min = m;

    for (int i = 0; i < h; i++)
    {
        ansh += 30;
    }
    if (min % 12 == 0)
    {
        min = min / 12;
    }
    else
    {
        min = min / 12 + 1;
    }
    for (int i = 0; i < min; i++)
    {
        ansh += 5;
    }

    if (ansh >= 360)
    {
        ansh = ansh % 360;
    }

    // printf("%d Degree ",ansh);
    return ansh;
}

int angleofminhand(int h, int m)
{
    int ansm = 0;
    int min = m;

    for (int i = 0; i < m; i++)
    {
        ansm += 6;
    }
    return ansm;
}

int anglebetweenHourhandandMinhand(int h, int m)
{
    int angleofhour = angleofhourhand(h, m);
    int angleofmin = angleofminhand(h, m);
    int anglebetweenHourandMin;

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
    printf("%d Degree ", anglebetweenHourandMin);
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
