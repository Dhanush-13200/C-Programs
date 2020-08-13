#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,arr[250][250];
    scanf("%d %d",&x,&y);
    printf("Enter The Elements of the Matrix\n\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Transpose of The Given Matrix is \n\n");
    for(i=0 ; i<y ; i++)
    {
        for(j=0 ; j<x ; j++)
        {
            printf("%d  ",arr[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}
