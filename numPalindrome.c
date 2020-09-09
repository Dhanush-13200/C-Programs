#include <stdio.h>
#include <stdlib.h>
/*
Input :
12321
Output :
This Number is a Palindrome
*/

int main()
{
    int x,rev=0;
    printf("Enter The Number\n");
    scanf("%d",&x);
    int temp;
    temp=x;
    while(x>0)
    {

        rev*=10;
        rev+=(x%10);
        x/=10;
    }
    if(temp==rev)
    {
        printf("\n\nThe Number is a Palindrome");
    }
    else
    {
        printf("\n\nThe Number is not a Palindrome");
    }
    return 0;
}
