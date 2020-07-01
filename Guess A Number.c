#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;
    int randomNumber;
    int NumberofGuesses;
    int flag=0;
    time_t t;
    srand((unsigned) time(&t));
    randomNumber = rand()%21;
    printf("This is Guess a Number Game\n");
    printf("Enter the Correct Number.\n");
    for (NumberofGuesses = 5; NumberofGuesses>0; --NumberofGuesses)
    {
        printf("Number of Try is 5 and Number of try left is =  %i\n",NumberofGuesses);
        scanf("%i",&guess);
        if(randomNumber==guess)
         {
             printf("Congratulations, It is a correct Number . \n");
             flag=1;
             break;
         }
        else if (guess<0 || guess>20)
            printf("The Number is not between 0 and 20\n");
        else if (randomNumber>guess)
            printf("The Number is Lesser than my Number\n");
        else if (randomNumber<guess)
            printf("The Number is Greater than my Number\n");
    }
    if(flag==0)
        printf("Your Tries has been finished.\n ");
    printf("Thanks for Playing");
    return 0;
}
