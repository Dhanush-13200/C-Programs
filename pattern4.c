#include <stdio.h>
#include <stdlib.h>

/*
Input :
6
A
Output :
A  _  _  _  A                                                                                                             
A  A  _  _  A                                                                                                             
A  _  A  _  A                                                                                                             
A  _  _  A  A                                                                                                             
A  _  _  _  A 
*/

int main()
{
    int x,row,col;
    char y;
    scanf("%d %c",&x,&y);
    for(row=1 ; row<=x ; row++,printf("\n"))
    {
        for(col=1 ; col<=x ; col++)
        {
            if( col==x || row==col || col==1)
            {
                printf(" %c ",y);
            }
            else
            {
                printf(" _ ");
            }
        }

    }
    return 0;
}
