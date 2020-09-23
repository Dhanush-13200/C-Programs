#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Example Input/Output 1:
Input:
programming

Output:
prng
*/


int main()
{
    char ch[101];
    scanf("%s",ch);
    int x;
    x=strlen(ch);
    printf("%c%c%c%c",ch[0],ch[1],ch[x-2],ch[x-1]);
    return 0;
}
