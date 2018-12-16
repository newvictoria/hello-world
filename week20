#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    //get score data from the user
    int score1 = get_int("score1?: \n");
    int score2 = get_int("score2?: \n");
    int score3 = get_int("score3?: \n");

    //print the first set of scores
    printf("Score1: ");
    chart(score1);

    //print the second set of scores
    printf("Score2: ");
    chart(score2);

    //print the third set of scores
    printf("Score3: ");
    chart(score3);
}

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
