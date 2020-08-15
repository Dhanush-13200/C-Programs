#include <stdio.h>
#include <stdlib.h>


/*
The program must accept an integer array of size N as the input. For each integer,
the program must print the sum of its adjacent integers as the output.

Example Input/Output:Input:
5
60 20 10 25 100

Output:
20 70 45 110 25

*/
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    for(int index = 0; index < N; index++){
            scanf("%d ", &array[index]);
    }
    printf("%d ", array[1]);
    for(int index = 1; index < N-1; index++){
            printf("%d ", array[index-1] + array[index+1]);
    }
    printf("%d ", array[N-2]);
    return 0;
}
