#include <stdio.h>
#include <stdlib.h>
/*
Input -
x elements in two array

Output -
6   7
5   8
6   3
2   7
9   2
etc
*/

int main()
{
    int x,i,j,arr[101],ar[101];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0 ; j<x ; j++)
    {
        scanf("%d",&ar[j]);
    }
    for(i=0 ; i<x ; i++)
    {
        printf("%d %d\n",arr[i],ar[i]);

    }
    return 0;
}
