#include <stdio.h>
#include <stdlib.h>
/*
The program must accept an integer array of size N as input.
The program mus print the integers in the array in reverse order as the output .
If there no negative number in the array then the program must print -1 as the output.

Input :
5
45  -89 -28 38  49

Output :
-28 -89

Input :
3
12  24  34

Output :
-1
*/

int main()
{
    int x,i,count=0,arr[300];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<x ; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    if(count>1)
    {
        for(i=x ; i>=0 ; i--)
        {
            if(arr[i]<0)
            {
                printf("%d ",arr[i]);
            }
        }
    }
    else if(count==0)
    {
        printf("-1");
    }
    return 0;
}
