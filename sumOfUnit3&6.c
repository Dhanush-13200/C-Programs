#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,arr[101],sum=0,count=0;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]%10==3 || arr[i]%10==6)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0 ; i<x ; i++)
        {
            if(arr[i]%10==3 || arr[i]%10==6)
            {
                sum+=arr[i];
            }
        }
        printf("%d",sum);
    }

    return 0;
}
