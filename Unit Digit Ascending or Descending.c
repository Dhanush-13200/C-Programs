#include <stdio.h>
#include <stdlib.h>
/*
The program sort the two integers in ascending order based on their
unit digit and print them as the output. If the unit digits are same then
sort the two integers in descending order and print them as the output.
*/

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a,b;
    a=x%10;
    b=y%10;
    if(a!=b)
    {
        if(a<b)
        {
            printf("%d %d",x,y);
        }
        else
        {
            printf("%d %d",y,x);
        }
    }
    else if (a==b)
    {
        if(x>y)
        {
            printf("%d %d",x,y);
        }
        else
        {
            printf("%d %d",y,x);
        }
    }
    return 0;
}
