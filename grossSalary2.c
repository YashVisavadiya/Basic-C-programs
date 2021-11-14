#include<stdio.h>

void main()
{
    float basic_salary,HRA,DA;

    printf("Enter Salary : ");
    scanf("%f",&basic_salary);

    if(basic_salary>=10000 && basic_salary<20000)
    {
        HRA=0.2*basic_salary;
        DA=0.8*basic_salary;
    }
    if(basic_salary>=20000 && basic_salary<30000)
    {
        HRA=0.25*basic_salary;
        DA=0.9*basic_salary;
    }
    if(basic_salary>=30000)
    {
        HRA=0.30*basic_salary;
        DA=0.95*basic_salary;
    }
    if(basic_salary<10000)
    {
        printf("Salary Must be greater than or equal to 10000 ...\n");
    }
    printf("HRA = %.2f",HRA);
    printf("DA = %.2f",DA);
}
