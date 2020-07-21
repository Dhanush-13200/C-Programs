#include <stdio.h>
#include <stdlib.h>

/*
Input :
5
12  31  64  90  45

Output :
5   0   4   1   2

*/


int main()
{
    int x,arr[200];
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=x-1 ; i>=0 ; i--)
    {
        printf("%d ",(arr[i]%10));
    }
    return 0;
}
