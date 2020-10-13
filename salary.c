#include <stdio.h>
#include <stdlib.h>

/*
In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic
salary and DA = 90% of basic salary. If his salary is either equal to
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
salary. If the employee's salary is input through the keyboard write
a program to find his gross salary.
*/

int main()
{
    float basic,gross,da,hra;
    printf("Enter The basic Salary :\n");
    scanf("%f",&basic);
    if(basic<1500)
    {
        da=(basic*0.9);
        hra=(basic*0.1);
    }
    else if(basic>=1500)
    {
        da=(basic*0.98);
        hra=500;
    }
    gross=basic+da+hra;
    printf("\nThe Total GrossPay is = %.2f",gross);
    return 0;
}
