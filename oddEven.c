#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0,arr[100];
    scanf("%d",&x);
    int i;
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even Integers are \n\n");
    for(i=1 ; i<x ; i+=2)
    {
        printf("%d) %d \n",(y+1),arr[i]);
        y++;
    }
    printf("Odd Integers are \n\n");
    for(i=0 ; i<x ; i+=2)
    {
        printf("%d) %d \n",(z+1),arr[i]);
        z++;
    }
    return 0;
}
