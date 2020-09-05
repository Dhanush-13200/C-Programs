#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,count=0,i,j,sum=0;
    printf("\nEnter The Number\n");
    scanf("%d",&x);
    printf("\n");
    j=x;
    i=x;
    while(i!=0)
    {
        i/=10;
        count++;
    }
    printf("%d",count);
    printf("\n");
    while(j!=0)
    {
        sum+=pow((j%10),count);
        printf("\n%d",sum);
        j/=10;
    }
    //printf("\n%d",sum);
    //printf("\n%d",x);

    if(sum==x)
    {
        printf("\nThe Entered Number is a Armstrong Number");
    }
    else
    {
        printf("\nThe Entered Number is a not Armstrong Number");
    }
    return 0;
}
