#include <stdio.h>
#include <stdlib.h>
/*
This Program check the first digit and last digit.
If both first and last digit are equal then it prints
Yes. If not Equal it prints No.
*/

int main()
{
    int N;
    scanf("%d",&N);
    int last=N%10;
    while(N>9)
    {
        N=N/10;
    }
    if(last == N)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
