#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("What is the height of the mario blocks?: ");
    
    for (int i = 0; i <= height; i++)
    {
        for (int k = 0; k < height - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        for (int y = 0; y < height - i; y++)
        {
            printf(" ");
        }
        printf("\n");
    }
}


