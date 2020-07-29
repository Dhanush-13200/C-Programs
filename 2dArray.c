#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,arr[250][250];    // X and Y are the required size of array.
    scanf("%d %d",&x,&y);         // Values of X and Y are taken as input from User
    for(i=0 ; i<x ; i++)          //  For Rows
    {
        for(j=0 ; j<y ; j++)      //  For Columns
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
