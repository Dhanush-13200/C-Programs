#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0 ; i<=x ; i++,printf("\n"))
    {
        for(j=0 ; j<=x ; j++,printf("\n"))
        {
            printf("%d %d",i,j);
        }
    }
    return 0;
}
