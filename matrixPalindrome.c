#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,m1[200][200];
    scanf("%d %d",&x,&y);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0 ; i<x ; i++)
    {
        for(j=y ; j>0 ; j--)
        {
            if(m1[i]==m1[j])
            {

            }
        }
    }
    return 0;
}
