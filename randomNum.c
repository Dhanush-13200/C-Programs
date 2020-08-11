#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* No limit */
/*
Prints Random Numbers Depending on the input
Input :
3
Output :
1 2 6
*/

int main()
{
    int x,y;
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        y=rand()%21;
        printf("%d ",y);
    }
    return 0;
}
