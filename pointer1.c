#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=10;
    int *ptr=&num;
    int result=0;
    result=*ptr+10;
    printf("%d",result);
    return 0;
}
