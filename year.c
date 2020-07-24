#include <stdio.h>
#include <stdlib.h>

/*
Input :
01 01 2020
Output :
January
*/

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    char arr[][100]={"January","February","March","April","May","June","July","August",
    "September","October","November","December"};
    if(y>=1 && y<=12)
    {
        printf("%s",arr[y-1]);
    }
    return 0;
}
