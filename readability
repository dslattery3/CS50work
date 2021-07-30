//program for determining the reading level for prompt
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");

    int letters = 0;
    int sentences = 0;
    int words = 1;

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        //char x = get_char(s[i]);
        //Letter count
        if ((s[i] > 96 && s[i] < 123) || (s[i] > 64 && s[i] < 91))
        {
            letters++;
        }

        //Punctuation/Sentence count
        else if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            sentences++;
        }

        //Space/Word count
        else if (s[i] == ' ')
        {
            words++;
        }
        else;
    }
    //printf("Letter count = %i\n", letters);
    //printf("Word count = %i\n", words);
    //printf("Sentece count = %i\n", sentences);

    //Coleman-Liau Index
    float L = ((100 * ((float) letters)) / ((float) words));
    //printf("L is %f\n", L);
    float S = ((100 * ((float) sentences)) / ((float) words));
    //printf("S is %f\n", S);
    float index = ((0.0588 * L) - (0.296 * S) - 15.8);
    index = roundf(index);
    
    //Report grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) index);
    }
}
