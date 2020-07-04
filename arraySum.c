#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int sum=0;
    int avg=0;
    int x=0;
    for(x=0 ; x<10 ; x++)
    {
        printf("Enter the Number %d \n",x+1);
        scanf("%d",&num[x]);
    }
    for(x=0 ; x<10 ; x++)
    {
        sum+=num[x];
    }
    avg=sum/10;
    printf("The sum is %d\n",sum);
    printf("The Average is %d",avg);
    return 0;
}
