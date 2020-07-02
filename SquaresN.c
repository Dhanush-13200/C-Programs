#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int z;
    z=(N*N);
    for(i=z ; i>=N ; i--)
    {
        printf("%d ",i);
    }
    return 0;
}
