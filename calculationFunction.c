#include <stdio.h>
#include <stdlib.h>

int Calculations(int x, int y, char ch)
{
    float z;
    switch(ch)
    {
        case '+':
          z=x+y;
          printf("Addition   %.2f",z);
          break;
        case '-':
          z=x-y;
          printf("Subtraction   %.2f",z);
          break;
        case '*':
          z=x*y;
          printf("Multiplication   %.2f",z);
          break;
        case '/':
          z=x/y;
          printf("Division   %.2f",z);
          break;
    }
    return 0;


}


int main()
{
    int x,y;
    char ch;
    scanf("%d %d %c",&x,&y,&ch);
    Calculations(x,y,ch);
    return 0;
}
