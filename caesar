//program for creating a cipher by offsenting the alphabet
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //make argv[1] an int for coding
    int k = (atoi(argv[1]) % 26);
    string p = get_string("plaintext: ");
    printf("ciphertext: ");

    //begin cyphering
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        char c;
        //check if a letter. if so change. if not leave
        if (isalpha(p[i]))
        {
            if (isalpha(p[i]) && isupper(p[i]))
            {
                c = ((((p[i] - 65) + k) % 26) + 65);
                printf("%c", c);
            }
            else if (islower(p[i]))
            {
                c = ((((p[i] - 97) + k) % 26) + 97);
                printf("%c", c);
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
    
}
