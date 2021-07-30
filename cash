//program for finding least amount of coins needed for change

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Need to get positive floating number
    float change_due;
    do
    {
        change_due = get_float("How much change is due? ");
    }
    while (change_due < 0);
    //round change to cents
    int cents = round(change_due * 100);
    //coin order quarters, dime, nickel, penny
    int coins = 0;
    
    while ((cents - 25) >= 0)
    {
        cents = cents - 25;
        coins++;
    }
    while ((cents - 10) >= 0)
    {
        cents = cents - 10;
        coins++;
    }
    while ((cents - 5) >= 0)
    {
        cents = cents - 5;
        coins++;
    }
    while ((cents - 1) >= 0)
    {
        cents = cents - 1;
        coins++;
    }
    printf("%i\n", coins);
    
}
