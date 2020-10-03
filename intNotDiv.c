#include <stdio.h>
#include <stdlib.h>
/*
The program must accept N integers and X as the input. The program must print the
integers which are not divisible by X as the output. If all the integers are divisible
by X, then the program must print -1 as the output.

Example Input/Output 1:
Input:
5 12
90 36 8 19 24
Output:90 8 19

Example Input/Output 2:
Input:
4 5
15 10 90 20
Output:
-1
*/



int main()
{
    int x,y,i,z,count=0;
    scanf("%d",&x);
    scanf("%d",&z);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&y);
        if(y%z!=0)
        {
            printf("%d ",y);
            count++;
        }

    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
