//creating basic programmes

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get user inputs from prompts for three scores
    int score1 = get_int("what is the first set of scores?: \n");
    int score2 = get_int("what is the second set of scores?: \n");
    int score3 = get_int("what is the third set of scores?: \n");

    //print those inputs in a bar chart for the first set of scores
    for (int i = 0; i < score1; i++)
    {
        //print bars
        printf("#");
    }

    printf("\n");

    //print those inputs in a bar chart for the second set of scores
    for (int i = 0; i < score2; i++)
    {
        //print bars
        printf("#");
    }
    printf("\n");

    //print those inputs in a bar chart for the third set of scores
    for (int i = 0; i < score3; i++)
    {
        //print bars
        printf("#");
    }
    printf("\n");
}
