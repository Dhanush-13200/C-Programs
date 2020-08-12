#include <stdio.h>
#include <stdlib.h>

/*
The program must accept an integer N as the input. The program must print all the
odd digits of N in reverse order as the output. If there is no odd digit in N then the
program must print -1 as the output.

Example Input/Output 1:
Input:
1047655
Output:
5571

*/

int main()
{
    int x,y,count=0;
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        if(y%2!=0)
        {
            printf("%d",y);
            count++;
        }
        x/=10;
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
