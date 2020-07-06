#include <stdio.h>
#include <stdlib.h>

/*
Input :
5
Output :
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1 ; row<=n ; row++, printf("\n"))
    {
        for(col=1 ; col<=n ; col++)
        {
            printf("* ");
        }
    }
    return 0;
}
