#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,count=0;
    char c[250][250];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<x ; j++)
        {
            scanf(" %c",&c[i][j]);
        }
    }
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<x ; j++)
        {
            printf(" %c",c[i][j]);
        }
        printf("\n");
    }
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<x ; j++)
        {
            if(c[i]==c[j] || c[i+j]==c[x-1]);
            {
                count++;
            }
        }
    }
    if(count==((2*x)-1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
