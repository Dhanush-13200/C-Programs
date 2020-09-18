#include <stdio.h>
#include <stdlib.h>

int check(int x[],int y)
{
    int i,arr[];
    for(i=0 ; i<101 ; i++)
    {
        if(arr[i]!=y){
            return 1;
        }
    }
    return 0;


}
int main()
{
    int x,y,i,j,count=0;
    scanf("%d %d",&x,&y);
    int arr[100];
    int i,ctr=0;
    for(i=1 ; i<=y ; i++)
    {
        arr[ctr]=i;
        ctr++;
    }
    for(i=1 ; i<=x ; i++)
    {
        for(j=1 ; j<=y ; j++)
        {
            if((i+j)%5==0 && check(arr,j))
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
