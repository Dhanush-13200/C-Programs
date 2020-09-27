#include <stdio.h>
#include <stdlib.h>

/*
The program must accept a positive integer N as the input. The program must print the
integers from 1 to N interlaced with the integers from N to 1 as the output.

Example Input/Output 1:
Input:
5
Output:
1 5 2 4 3 3 4 2 5 1

Example Input/Output 2:
Input:
10
Output:
1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1
*/

int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=1,j=x ; i<=x,j>0 ; i++,j--)
    {
        printf("%d %d ",i,j);
    }
    return 0;
}
