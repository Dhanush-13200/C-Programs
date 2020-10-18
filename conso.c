#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Input :
assuRance
5

Output :
ssR

*/

int main()
{
    int i,y,flag=0;
    char str[101],ch;
    scanf("%s",str);
    scanf("%d",&y);
    for(i=0 ; i<y ; i++)
    {
        ch=tolower(str[i]);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
        {
            printf("%c",str[i]);
            flag=1;
        }
    }
    if(!flag)
    {
        printf("-1");
    }
    return 0;
}
