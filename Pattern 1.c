#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    printf("\n");
    for(i=1 ; i<=n ; i++){
        c=1;
        if(i%2!=0){
            for(j=1 ; c<=i ; c++,j+=2)
                printf("%d",j);
        }
        else{
            for(j=2 ; c<=i ; c++,j+=2)
                printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
