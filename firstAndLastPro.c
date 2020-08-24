#include <stdio.h>
#include <stdlib.h>

/*
Input :
514 2004

Output :
8
Explanation :
first variable last digit multiplied by second variable last digit
*/

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a;
    a=x%10;
    while(y>9)
    {
        y/=10;
    }
    printf("%d",a*y);
    return 0;
}
