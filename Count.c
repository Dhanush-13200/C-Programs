#include <stdio.h>
#include <stdlib.h>

/*
Input :
5
30 -5 0 2 -56

Output :
2 2 1

*/
int main()
{
    int x,y;
    int po=0,ne=0,z=0;
    scanf("%d",&x);
    for(int i=1 ; i<=x ; i++)
    {
        scanf("%d",&y);
        if(y>0)
        {
            po++;
        }
        else if(y<0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    printf("%d %d %d",po,ne,z);
    return 0;
}
