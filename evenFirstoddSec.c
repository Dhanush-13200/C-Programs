#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,arr[10000];
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);

        }
    }
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
