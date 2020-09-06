#include <stdio.h>
#include <stdlib.h>

/*
Input :
Enter a number:
6
Output :
6 is a Perfect Number.
*/

int main()
{
    int x,i,sum=0;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for(i=1 ; i<x ; i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    if(sum==x)
    {
        printf("%d is a Perfect Number\n",x);
    }
    else
    {
        printf("%d is a not Perfect Number\n",x);
    }
    return 0;
}
