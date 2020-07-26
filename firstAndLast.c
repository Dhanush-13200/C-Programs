#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,arr[200];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=1;
    for(i=0 ; i<(x/2.0) ; i++)
    {
        printf("%d %d ",arr[i],arr[x-count]);
        count++;
    }
    if(x%2!=0)
    {
        printf("%d ",arr[x/2]);
    }

    return 0;
}
