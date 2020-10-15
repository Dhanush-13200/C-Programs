#include <stdio.h>
#include <stdlib.h>

/*
The marks obtained by a student in 5 different
subjects are input through the keyboard. The student gets a
division as per the following rules:
Total Marks for each  subject is 100.
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
*/

int main()
{
    int s1,s2,s3,s4,s5;
    printf("\nEnter The Percentage for Subject 1 :");
    scanf("%d",&s1);
    printf("\nEnter The Percentage for Subject 2 :");
    scanf("%d",&s2);
    printf("\nEnter The Percentage for Subject 3 :");
    scanf("%d",&s3);
    printf("\nEnter The Percentage for Subject 4 :");
    scanf("%d",&s4);
    printf("\nEnter The Percentage for Subject 5 :");
    scanf("%d",&s5);
    int perc;
    perc=((s1+s2+s3+s4+s5)/5);
    printf("\n%d",perc);
    if(perc>=60)
    {
        printf("\n First Division");
    }
    else if(perc>49 && perc<60)
    {
        printf("\n Second Division");
    }
    else if(perc>39 && perc<50)
    {
        printf("\n Third Division");
    }
    else
    {
        printf("\n Fail");
    }
    return 0;
}
