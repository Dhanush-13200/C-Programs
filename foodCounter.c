#include <stdio.h>
#include <stdlib.h>
/*
The program must accept N number of food items CH represented in lowercase
alphabets as the input. The program must print the output based on the following
conditions.p represents popcorn, s represents samosa, i represents icecream, j
represents juice, t represents tea, c represents coffee.p and s can be bought in
the 1st counter.i and j can be bought in the 2nd counter.t and c can be bought in
the 3rd counter.If any one of the input values is not in the food items mentioned
above, then the program must print UNAVAILABLE as the output.

Example Input/Output 1:
Input:
4
p
t
c
v
Output:
1st counter
3rd counter
3rd counter
UNAVAILABLE

Example Input/Output 2:
Input:
2
i
j
Output:
2nd counter
2nd counter
*/

int main()
{
    int x,i;
    char c[101];
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf(" %c",&c[i]);
    }
    for(i=0 ; i<x ; i++)
    {
        switch(c[i])
        {
            case 'p':
                printf("1st counter");
                break;
            case 's':
                printf("1st counter");
                break;
            case 'i':
                printf("2nd counter");
                break;
            case 'j':
                printf("2nd counter");
                break;
            case 't':
                printf("3rd counter");
                break;
            case 'c':
                printf("3rd counter");
                break;
            default:
                printf("UNAVAILABLE");
        }
        printf("\n");
    }
    return 0;
}
