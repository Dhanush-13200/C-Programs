#include <stdio.h>
#include <stdlib.h>

/*
The program must accept two integers X and Y as the input. The program must print the
first 10 multiples of X and Y as the output.

Example Input/Output 1:
Input:
3 7
Output:
3 6 7 9 12 14 15 18 21 24

Example Input/Output 2:
Input:
8 7
Output:
7 8 14 16 21 24 28 32 35 40

*/
int main()
{
    int x,y,p=0,v=1;
    scanf("%d %d",&x,&y);
    while(p<10)
    {
        if(v%x==0 || v%y==0)
        {
            printf("%d ",v);
            p++;
        }
        v++;
    }
    return 0;
}
