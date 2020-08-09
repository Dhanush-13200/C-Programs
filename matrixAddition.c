#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,m1[200][200],m2[200][200],m3[200][200];
    scanf("%d %d",&x,&y);
    printf("Enter The Elements of 1st Matrix");
    printf("\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\n");
    printf("Enter The Elements of 2nd Matrix");
    printf("\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    // Addition Section
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\n");
    printf("Addition Of two Matrix are - ");
    printf("\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
