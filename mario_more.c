//program for creating a pyramid of #'s with a gap between the sides
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = 0;
    // Get height between 1 and 8
    while (x < 1 || x > 8)
    {
        x = get_int("Height (1-8): ");
    }
    //Build the pyramid
    //for loop buidling until counter  = x
    
    for (int y = 0; y < x; y++)
    {
        //right aligned
        for (int z = 1; z < (x - y); z++)
        {
            printf(" ");
        }
        for (int k = 0; k <= y; k++)
        {
            printf("#");
        }
        printf("  ");
        //left aligned
        for (int j = 0; j <= y; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
