#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[101],y[101];
    int a,b;
    scanf("%s %s",x,y);
    a=strlen(x);
    b=strlen(y);
    if(a>b)
    {
        printf("%s",x);
    }
    else if(a==b)
    {
        printf("%s",x);
    }
    else
    {
        printf("%s",y);
    }
    return 0;
}
