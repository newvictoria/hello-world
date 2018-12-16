//creating basic programmes

#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    //using arrays to improve syntax
    //give me three scores in an array
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("What is your %i score?: \n", i + 1);
    }

    //changing the syntax to arrays
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i", i + 1);
        chart(scores[i]);
    }
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
