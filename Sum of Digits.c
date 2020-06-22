/* This Program takes a number and adds each digit and gives it as Output

Example:    
Input - 12345
Output - 15
Explanation - 1+2+3+4+5 = 15
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    scanf("%d",&num);
    while(num>0)
    {
        sum+=(num%10);
        num/=10;
    }
    printf("%d",sum);
    return 0;
}
