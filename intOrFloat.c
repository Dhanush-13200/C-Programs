#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char num[200];
    int i;
    int flag=0;
    printf("Enter The Number\n");
    scanf("%s",num);
    while(num[i++]!='\0')
    {
        if(num[i]=='.')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("The Number is a Floating Point Number\n");
    }
    else
    {
        printf("The Number is a Integer \n");
    }

    return 0;
}
