#include <cs50.h>
#include <stdio.h>

int main(void)

{
    //prompt user for answer
    char c = get_char("answer?: \n");

    //check answer
    if (c == 'Y' || c == 'y')
    {
        printf("yes\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("nah\n");
    }
}
