#include <stdio.h>
#include <stdlib.h>

/*
Input:
1427

Output:
6
*/

int main()
{
    int x,sum=0;
    scanf("%d",&x);
    while(x>0)
    {
        if((x%10)%2==0)
        {
            sum+=(x%10);
        }
        x/=10;
    }
    printf("%d",sum);
    return 0;
}
