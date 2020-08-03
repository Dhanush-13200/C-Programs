#include <stdio.h>
#include <stdlib.h>

/*
The number of rows N is passed as the input. The program must print the
half pyramid using asterisk *.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
5

Output:
*
* *
* * *
* * * *
* * * * *

*/

int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++,printf("\n"))
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("* ");
        }
    }
    return 0;
}
