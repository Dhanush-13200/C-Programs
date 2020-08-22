#include <stdio.h>
#include <stdlib.h>
/*
The program must accept N integers and an integer K as the
input. The program must print the last K integers among
the N integers as the output.

Example Input/Output 2:
Input:
9
12 54 12 36 75 46 10 28 41
5
Output:
75 46 10 28 41

*/
int main()
{
    int x,i,arr[1000];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int y;
    scanf("%d",&y);
    for(i=x-y ; i<x ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
