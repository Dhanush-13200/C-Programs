#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N numbers as the input. The program must calculate the
sum of odd digits in the tenth place as S1 and the sum of even digits in
the tenth place as S2. Then the program must print the maximum of S1 and S2
as the output.

Example Input/Format 1:
Input:
5
10 20 30 40 50
Output:
9

Example Input/Output 2:
Input:
4
100 120 240 360
output:
12
*/

int main()
{
    int x,n,even=0,odd=0;
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&n);
        n/=10;
        if((n%10)%2==0)
        {
            even+=(n%10);
        }
        else
        {
            odd+=(n%10);
        }
    }
    if(even>odd)
    {
        printf("%d",even);
    }
    else
    {
        printf("%d",odd);
    }
    return 0;
}
