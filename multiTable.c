#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,i;
    printf("Enter an integer you need to print the table of: ");
    scanf("%d",&n);
    printf("Enter The Range\n");
    scanf("%d",&r);
    for(i = 1; i <= r; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n*i);
    }
    return 0;
}
