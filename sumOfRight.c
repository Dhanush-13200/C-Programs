#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,arr[200];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0 ; j<x ; j++)
    {
        printf("%d ",(arr[j]+arr[x-j]));
    }
    return 0;
}
