#include <stdio.h>
#include <stdlib.h>

/*
The number of rows N is passed as the input. The program must print the half pyramid
using the numbers from 1 to N.

Example Input/Output 1:
Input:
5
Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++,printf("\n"))
    {
        int num=1;
        for(j=0 ; j<=i ; j++)
        {
            printf("%d ",num++);

        }
    }
    return 0;
}
