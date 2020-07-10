#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    int i,z;
    z=(x*x);
    for(i=z ; i>=x ; i--)
    {
        printf("%d ",i);
    }
    return 0;
}
