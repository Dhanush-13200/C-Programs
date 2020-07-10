  #include <stdio.h>
#include <stdlib.h>


// Using Bitwise Operator
int main()
{
    int x,i;
    printf("Enter The Range of Numbers \n");
    scanf("%d",&x);
    for(i=1 ; i<=x ; i++)
    {
        if(i&1)
        {
            printf("The Number %d is Odd\n",i);
        }
        else if(!(i&1))
        {
            printf("The Number %d is Even\n",i);
        }
    }
    return 0;
}
