#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,arr[1000][1000];
    scanf("%d %d",&x,&y);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int odd=0 , even=0;
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            if(arr[i][j]%2==0)
            {
                even+=arr[i][j];
            }
            else
            {
                odd+=arr[i][j];
            }
        }
    }
    printf("Even is  %d \n\n Odd id   %d",even,odd);
    return 0;
}
