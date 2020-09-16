#include <stdio.h>
#include <stdlib.h>

/*
The program must accept an integer N as the input. The program must print the
binary representation of N as the output.

Example Input/Output:
Input:
9
Output:
1001
*/

int main()
{
    int x,arr[100],count=0,i;
    scanf("%d",&x);
    while(x>0)
    {
        arr[count]=(x%2);
        x/=2;
        count++;
    }
    for(i=count-1 ; i>=0 ; i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
