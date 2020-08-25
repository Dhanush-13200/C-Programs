#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N integers as the input.
The program must print all the two digit integers among the N integers
in reverse order as the output.
If there is no two digit integer then the program must print -1 as the output.

Example Input/Output 1:
Input:
6
10 987 75 110 5 99

Output:
99 75 10

Example Input/Output 2:
8
203 540 897 1 6 501 150 2

Output:-1
*/

int main()
{
    int x,i,arr[200],count=0;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=x-1 ; i>=0 ; i--)
    {
        if(arr[i]<100 && arr[i]>9)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]<100 && arr[i]>9)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
