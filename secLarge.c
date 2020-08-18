#include <stdio.h>
#include <stdlib.h>

/*
The program must accept N integers and print the second largest value among
the N integers.

Boundary Conditions:
2 <= N <= 100
The value of the integers will be from -999999 to 999999.

Example Input/Output 1:
Input:
3
100
2200
345
Output:
345

Example Input/Output 2:
Input:
6
-23 -256 -87 -90 -11019 -2
Output:
-23
*/

int main()
{
    int x,i,j,arr[2000];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("%d",arr[1]);
    return 0;
}
