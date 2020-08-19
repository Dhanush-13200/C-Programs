#include <stdio.h>
#include <stdlib.h>
/*
The program must accept N integers and an integer M as the input.
The program must print yes if M is present in the N integers.
Else the program must print no as the output.

Boundary Condition(s):
1 <= N <= 100
1 <= Each integer value, M <= 10^5

Example Input/Output 1:
Input:
6
91 73 64 82 50 33
73
Output:yes
Example Input/Output 2:
Input:
6
10 54 98 75 55 14
46
Output :no
*/

int main()
{
    int x,i,y,arr[1001];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    int count=0;
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]==y)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
