#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/*
Example Input/Output 1:
Input:
technology

Output:
ygolonhcet
**/

int main()
{
    /*
    char c[101];
    scanf("%s",c);
    int x,i;
    x=strlen(c);
    for(i=x-1 ; i>=0 ; i--)
    {
        printf("%c",c[i]);
    }
    */
    //for more than one word

    char c[101];
    gets(c);
    int x,i;
    x=strlen(c);
    for(i=x-1 ; i>=0 ; i--)
    {
        printf("%c",c[i]);
    }

    return 0;
}
    
