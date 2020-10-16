#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,arr[250][250];
    printf("Enter The Total Number of Cities\n");
    scanf("%d",&x);
    printf("Enter The Number of days\n");
    scanf("%d",&y);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            printf("City No is : %d    Day is :%d  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++,printf("\n"))
        {
            printf("City=%d     Day=%d  And Temperature is = %d",i+1,j+1,arr[i][j]);
            printf("\n");
        }

    }
    return 0;
}
