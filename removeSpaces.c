#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char ch[101],new1[101];
    gets(ch);
    int x,count=0,j=0;
    x=strlen(ch);
    while(ch[count]!=0 && count<=x)
    {
        if(ch[count]!=' ')
        {
            new1[j++]=ch[count];
        }
        count++;
    }
    new1[j]='\0';
    printf("%s",new1);
    //OR
    /*
    char str[101];
    scanf("%[^\n]", str);
    for(int index=0; str[index]!='\0'; index++)
    {
        if(str[index]!=' ')
        {
            printf("%c", str[index]);
        }
    }
    */
    return 0;
}
