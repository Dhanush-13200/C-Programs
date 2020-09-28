#include <stdio.h>
#include <stdlib.h>
#define max 2000

/*
Input :
5

Output :
2310

(2 * 3 * 5 * 7 *11)
*/

int main()
{
    long long int x,pro=1;
    int i,j,count=0,ctr;
    scanf("%lld",&x);
    for(i=2 ; i<=max ; i++)
    {
        ctr=0;
        for(j=1 ; j<=i ; j++)
        {
            if(i%j==0)
            {
                ctr++;
            }
        }
        if(ctr==2)
        {
            count++;
            pro*=i;
        }

        if(count==x)
        {
            break;
        }
    }
    printf("%lld",pro);
    return 0;
}
