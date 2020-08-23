#include <stdio.h>
#include <stdlib.h>
/*
The program must accept an integer N as the input.
The program must print the desired pattern as shown in the Example
Input/Output section.

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
    int x,row,col;
    scanf("%d",&x);
    for(row=1 ; row<=x ; row++,printf("\n"))
    {
        for(col=1 ; col<=row ; col++)
        {
            printf("%d ",col);
        }
    }
    return 0;
}
