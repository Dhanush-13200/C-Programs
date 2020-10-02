#include <stdio.h>
#include <stdlib.h>
/*
Accept an integer matrix of size RxC as the input. For each column in the matrix,
the program must print the sum of the elements of that column as the output.

Example Input/Output:Input:
3 3
10 20 40
40 50 60
15 80 70

Output:
65 150 170
*/

int main()
{
    int x,y,i,j,mat[100][100],sum;
    scanf("%d %d",&x,&y);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0 ; i<y ; i++)
    {
        sum=0;
        for(j=0 ; j<x ; j++)
        {
            sum+=mat[j][i];

        }
        printf("%d ",sum);
    }
    return 0;
}
