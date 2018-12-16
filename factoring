//creating basic programmes

#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    //get user inputs from prompts for three scores
    int score1 = get_int("what is the first set of scores?: \n");
    int score2 = get_int("what is the second set of scores?: \n");
    int score3 = get_int("what is the third set of scores?: \n");

    //print those inputs in a bar chart for all three sets of scores
    printf("Score1: ");
    chart(score1);

    //print those inputs in a bar chart for the second set of scores
    printf("Score2: ");
    chart(score2);

    //print those inputs in a bar chart for the third set of scores
    printf("Score3: ");
    chart(score3);
}

// charting the chart function
void chart(int score)
{
    //set up a for loop
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
