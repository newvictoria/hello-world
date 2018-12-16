//generate a bar chart of three array values

#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    //get scores from user
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("What is the %i set of score?: ", i+1);
    }

    //chart scores
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }
    printf("\n");
}


//generate bar
void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
