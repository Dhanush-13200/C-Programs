#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hours;
    double GrossPay;
    double NetPay;
    double taxes;
    printf("Enter the Hours Worked :\n");
    scanf("%i",&Hours);
    if (Hours<=40)
        GrossPay=Hours*12;
    else
        GrossPay=(40*12)+((Hours-40)*18);
    //Taxes are calculated from below statements
    if (GrossPay<=300)
    {
        NetPay=GrossPay-(GrossPay*0.15);
        taxes = GrossPay*0.15;
    }
    else if (GrossPay>300 && GrossPay<451)
    {
        NetPay=(((GrossPay-300)-((GrossPay-300)*0.20))+(300-(300*0.15)));
        taxes = ((GrossPay-300)*0.20)+(300*0.15);
    }
    else
    {
        NetPay=(((300-(300*0.15))+(150-(150*0.20))+(GrossPay-450)-((GrossPay-450)*0.25)));
        taxes=(300*0.15)+(150*0.20)+((GrossPay-450)*0.25);
    }
    printf("Net Pay is = %.2f\n",NetPay);
    printf("Taxes is = %.2f",taxes);
    return 0;
}
