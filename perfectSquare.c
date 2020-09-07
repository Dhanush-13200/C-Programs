#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y;
    float temp;
    printf("Enter The Number\n");
    scanf("%d",&x);
    temp=sqrt(x);
    y=temp;
    if(y==temp)
    {
        printf("\nThe Number is a Perfect Square");
    }
    else
    {
        printf("\nThe Number is not a Perfect Square");
    }
    return 0;
}
