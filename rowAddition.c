#include <stdio.h>
#include <stdlib.h>

/*
Input :
2 3 
1 2 3 
4 5 6

Output :
1 2 3     6
4 5 6     15
*/

int main()
{
    int x,y,i,j,arr[250][250];
    scanf("%d %d",&x,&y);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;
    printf("\n\n");
    for(i=0 ; i<x ; i++)
    {
        sum=0;
        for(j=0 ; j<y ; j++)
        {
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("     %d",sum);
        printf("\n");
    }
    return 0;
}
