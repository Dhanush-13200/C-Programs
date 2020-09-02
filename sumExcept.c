#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N integers as the input. The program must print the sum of
the N integers except for the current integer.

Boundary Condition(s):
1 <= N <= 100

Example Input/Output 1:
Input:
5
1 4 6 3 9
Output:
22 19 17 20 14

Example Input/Output 2:
Input:
9
-10 83 7 -1 9 -5 -19 -21 10
Output:
63 -30 46 54 44 58 72 74 43

*/


int main()
{
    int x,i,arr[100];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0 ; i<x ; i++)
    {
        sum+=arr[i];
    }
    int j;
    for(j=0 ; j<x ; j++)
    {
        printf("%d ",sum-arr[j]);
    }
    return 0;
}
