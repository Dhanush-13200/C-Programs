#include <stdio.h>
#include <stdlib.h>

/*The program must accept N tickets as the input.The program must print the output
based on the following conditions.-If the ticket number is between 1 to 250
(inclusive of 1 and 250), then print FIRST CLASS.-If the ticket number is between
251 to 500 (inclusive of 251 and 500), then print SECOND CLASS.-Else the program
must print INVALID TICKET as the output.

Example Input/Output 1:
Input:
5
2 15 350 500 20
Output:
FIRST CLASS
FIRST CLASS
SECOND CLASS
SECOND CLASS
FIRST CLASS
*/

int main()
{
    int x,i,arr[300];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        if(arr[i]<=250)
        {
            printf("FIRST CLASS");
            printf("\n");
        }
        else if(arr[i]>250 && arr[i]<=500)
        {
            printf("SECOND CLASS");
            printf("\n");
        }
    }
    return 0;
}
