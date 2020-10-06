#include <stdio.h>
#include <stdlib.h>

/*
The program must accept three integers N, X and Y as the input. The program must
print the first N multiples of X which are not divisible by Y as the output.

Example Input/Output 1:
Input:
10
2 6
Output:
2 4 8 10 14 16 20

Example Input/Output 2:
Input:
13
5 8
Output:
5 10 15 20 25 30 35 45 50 55 60 65

*/
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    for(int i=1 ; i<=x*y ; i++)
    {
        if(i%y==0 && i%z!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
