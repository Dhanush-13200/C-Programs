#include <stdio.h>
#include <stdlib.h>

/*
Input :
5
Output :
1 2 3 4 5 4 3 2 1
*/

int main()
{
    int x,row,col;
    scanf("%d",&x);
    for(row=1 ; row<=x ; row++)
    {
        printf("%d ",row);

    }
    for(col=x-1 ; col>0 ; col--)
    {
        printf("%d ",col);
    }
    return 0;
}
