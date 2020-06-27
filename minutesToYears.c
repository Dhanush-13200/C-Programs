#include <stdio.h>
#include <stdlib.h>

int main()
{
    double min;
    scanf("%f\n",&min);
    double year;
    year = min/525600;
    double days;
    days = min/1440;
    printf("Years = %f\n",year);
    printf("Days = %f",days);
    return 0;
}
