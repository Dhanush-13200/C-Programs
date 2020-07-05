#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[15];
    int avg=0;
    int total=0;
    int x=0;
    for(x=0 ; x<15 ; x++)
    {
        printf("Enter the score of Match %d\n",(x+1));
        scanf("%d",&score[x]);
    }
    for(x=0 ; x<15 ; x++)
    {
        total+=score[x];
    }
    avg=total/15;
    printf("The Total scores is %d\n",total);
    printf("The Average scored by the Team is %d",avg);
    return 0;
}
