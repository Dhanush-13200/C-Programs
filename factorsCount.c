#include <stdio.h>
#include <stdlib.h>

/*
Accept a number N as the input. The program must print the count of factors of
N as the output using function.

Example Input/Output:

Input:
12

Output:
6
Explanation:The factors of 12 are 1, 2, 3, 4, 6 and 12.
So the count of factors is 6.Hence the output is 6

*/
int Factors(int x)
{
    int count=0 , i;
    for(i=1 ; i<=x ; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

int main()
{
    int x;
    scanf("%d",&x);
    Factors(x);
    return 0;
}
