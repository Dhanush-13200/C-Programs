#include <stdio.h>
#include <stdlib.h>

/*
Input :
4
3
Output :
64
*/

int main()
{
    long long int x,y,i,pro=1;
    printf("Enter the Number : \n");
    scanf("%lld",&x);
    printf("Enter The Exponential : \n");
    scanf("%lld",&y);
    for(i=0 ; i<y ; i++)
    {
        pro*=x;
    }
    printf("The Exponential Value of Number is \n %lld",pro);
    return 0;
}
