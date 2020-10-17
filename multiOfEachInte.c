#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N positive integers as the input. The program must print
the first 10 multiples of each integer as the output.

Example Input/Output 1:
Input:
5
2 5 3 10 6
Output:
2 4 6 8 10 12 14 16 18 20
5 10 15 20 25 30 35 40 45 50
3 6 9 12 15 18 21 24 27 30
10 20 30 40 50 60 70 80 90 100
6 12 18 24 30 36 42 48 54 60

*/

int main()
{
    int x,arr[101];
    scanf("%d",&x);
    int i,j;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        for(j=1 ; j<=10 ; j++)
        {
            printf("%d ",j*arr[i]);
        }
        printf("\n");
    }
    return 0;
}
