#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,k,count;
    scanf("%d",&n);
    for(j=2 ; j<=n ; j++)
    {
        count=0;
        for(k=1 ; k<=j ; k++)
        {
            if(j%k==0)
            {
                count++;
            }
        }
        if(count<=2)
        {
            printf("%d ",j);
        }

    }
    return 0;
}
