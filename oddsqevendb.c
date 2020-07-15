#include <stdio.h>
#include <stdlib.h>

/*
The Program Must accept integer array of size N as the input.
The program must print the doubled value of the elements in the array in odd position
and the square value of the elements in the array in the even position as the output
*/

int main()
{
    int x,arr[100];
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        if(i%2==0)
        {
            printf("%d ",(arr[i]*2));
        }
        else
        {
            printf("%d ",(arr[i]*arr[i]));
        }
    }
    return 0;
}
