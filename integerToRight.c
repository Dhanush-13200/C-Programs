#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N unique integers and an integer X as the input.
The program must print all the integers right to the integer X (inclusive of X)
as the output.Note: The integer X is always present in the N integers.

Boundary Condition(s):
2 <= N <= 100
1 <= Each integer value,
X <= 1000

Example Input/Output 1:
Input:
6
20 35 10 44 99 18
44

Output:
44 99 18

*/

int main()
{
    int x,i,y,z,arr[1500];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]==y)
        {
            z=i;
        }
    }
    for(i=z ; i<x ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
