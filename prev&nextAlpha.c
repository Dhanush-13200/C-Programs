#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(c=='a')
    {
        printf("z%c",c+1);
    }
    else if(c=='z')
    {
        printf("%ca",c-1);
    }
    else
    {
        printf("%c%c",c-1,c+1);
    }
    return 0;
}
