#include <stdio.h>
#include <stdlib.h>

void addition(int x, int y)
{
    int result = x+y;
    printf("Addition of %d and %d is = %d\n",x,y,result);
}

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    addition(x,y);
    return 0;
}
