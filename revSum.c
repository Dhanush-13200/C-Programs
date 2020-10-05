#include <stdio.h>
#include <stdlib.h>

/*
The program must accept two integers N1 and N2 containing the same number of digits.
The program must print the sum of N1 and N2 in reverse order.Note:
All the trailing zeroes in sum must be removed.

Example Input/Output 1:
Input:
1233
3456
Output:
9864
*/

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int z;
    z=x+y;
    int rev=0;
    while(z>0)
    {
        rev*=10;
        rev+=(z%10);
        z/=10;
    }
    printf("%d",rev);
    return 0;
}
