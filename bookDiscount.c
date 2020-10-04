#include <stdio.h>
#include <stdlib.h>
/*
While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program
to calculate the total expenses
*/

int main()
{
    int quan;
    float price;
    scanf("%d %f",&quan,&price);
    float total;
    total=(quan*price);
    if(quan>1000)
    {
        total=total-(total*0.10);
    }
    printf("Total Amount Billed is = %.2f",total);
    return 0;
}
