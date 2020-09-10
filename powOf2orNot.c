#include <stdio.h>
#include <stdlib.h>

/*
Input :
Enter an integer number: 32
Output :
32 is a number that is the power of 2.
*/

int main()
{
    int x,flag=0;
    printf("Enter The Number\n");
    scanf("%d",&x);
    int temp;
    temp=x;
    while(temp!=1)
    {
        if((temp%2)!=0)
        {
            flag=1;
            break;
        }
        temp/=2;
    }
    if(flag)
    {
        printf("\n%d is not a Power of 2",x);
    }
    else
    {
        printf("\n%d is a Power of 2",x);
    }
    return 0;
}
