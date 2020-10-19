#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char arr[1000];
    int i;
    scanf("%s",arr);
    for(i=0 ; arr[i]!='\0' ; i++)
    {
        if(isalpha(arr[i]) || isdigit(arr[i]))
        {
            printf("%c",arr[i]);
        }
    }
    return 0;
}
