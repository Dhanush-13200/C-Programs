#include <stdio.h>
#include <stdlib.h>

/*In a shop, the price of the shirt is P. But if a customer purchases N shirts, then he gets F shirts free(not billed).
The price of the shirt P and the number of shirts S bought by the customer is passed as input to the program.
The program must print the bill amount A.

INPUT :
The first line contains the value of N and F separated by space.
The second line contains the value of P and S separated by space.

Output :
The first line contains the value of A.

Example :
N   F
P   S

3   1
300 9
*/

 int main()
{
    int n,f,p,s;
    scanf("%d %d\n%d %d",&n,&f,&p,&s);
    int i;
    int amount=0;
    for(i=0 ; i<=s ; i++)
    {
        amount+=p;
        if(i%n==0)
        {
            i+=f;
        }
    }
    printf("%d",amount);
    return 0;
}
