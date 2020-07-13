#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,arr[2000];
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int y=0;
    for(i=0 ; i<x ; i++)
    {
        printf("%d> %d\n\n",(y+1),arr[i]);
        y++;
    }
    int j,a;
    for(i=0 ; i<x ; i++)
    {
        for(j=i+1 ; j<x ; j++)
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
    }
    printf("The Numbers are arranged below\n\n");
    int z=0;
    for(i=0 ; i<x ; i++)
    {
        printf("%d) %d\n",z+1,arr[i]);
        z++;
    }
    return 0;
}
