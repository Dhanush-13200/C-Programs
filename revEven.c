#include <stdio.h>
#include <stdlib.h>
/*

The program must accept N integers as the input. The program must print all the even integers among the N integers in
reverse order as the output. If there is no even integer then the program must print -1 as the output.

Example Input/Output 1:
Input:
5
1 2 5 7 8
Output: 8 2

Example Input/Output 2:
Input:
4
1 3 5 7

Output:-1
*/
int main()
{
    int x,i,arr[100000],count=0;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=x-1 ; i>=0 ; i--)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
