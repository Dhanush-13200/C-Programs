#include <stdio.h>
#include <stdlib.h>

/*The program must accept an integer N as the input. The program must count the digits
of N as C, then the program must print the first C multiples of C as the output.

Example Input/Output 1:
Input:
98984
Output:
5 10 15 20 25

Example Input/Output 2:
Input:
123
Output:
3 6 9

*/

int main()
{
    int x,count=0;
    scanf("%d",&x);
    while(x>0)
    {
        count++;
        x/=10;
    }
    int i;
    for(i=1 ; i<=count ; i++)
    {
        printf("%d ",count*i);
    }
    return 0;
}
  
