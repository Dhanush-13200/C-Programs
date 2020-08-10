#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N integers and an integer X as the input. The program must
print the (X-1)th integer. Then the program must print the Xth integer.
Finally, the program must print the (X+1)th integer.

Boundary Condition(s):
3 <= N <= 100
1 < X < N

Example Input/Output 1:
Input:
7
12 45 78 56 89 23 10
4
Output:
78 56 89

*/

int main()
{
    int x,i,arr[1000];
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d %d %d",arr[y-2],arr[y-1],arr[y]);
    return 0;
}
