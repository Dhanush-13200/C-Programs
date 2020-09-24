#include <stdio.h>
#include <stdlib.h>

/* 
input
5
output
----a                                                                                                                                                                                                                 
---ba                                                                                                                                                                                                                 
--cba                                                                                                                                                                                                                 
-dcba                                                                                                                                                                                                                 
edcba 
*/
            
int main()
{
    int x;
    scanf("%d",&x);
    int row,col,col1;
    char al='a';
    for(row=1 ; row<=x ; row++)
    {
        for(col=1 ; col<=x-row ; col++)
        {
            printf("-");
        }
        for(col1=1 ; col1<=row ; col1++)
        {
            printf("%c",al--);
        }
        al+=(row+1);
        printf("\n");
    }
    return 0;
}
