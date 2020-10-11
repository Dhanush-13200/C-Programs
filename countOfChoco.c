#include <stdio.h>
#include <stdlib.h>
/*
Julie bought chocolates for N days. The program must accept N integers representing
the number of chocolates bought on each day as the input. The program must print
the total number of chocolates bought from the first day for each day as the output.

Example Input/Output 1:
Input:
5
9 8 2 4 1
Output:
9 17 19 23 24
Example Input/Output 2:
Input:
4
10 2 9 7
Output:
10 12 21 28

*/

int main()
{
    int x,n,i,sum=0;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&n);
        sum+=n;
        printf("%d ",sum);
    }
    return 0;
}
