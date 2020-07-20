#include <stdio.h>
#include <stdlib.h>
/*
Flyod's Triangle
Input :
5
Output :
1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

int main()
{
    int x,i,j,sum=1;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++,printf("\n"))
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("%d ",sum);
            sum++;
        }
    }
    return 0;
}
