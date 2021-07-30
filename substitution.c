//program for entering an alphabetic key, entering a prompt and receiving a coded text
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check format
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //check long enough
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    //check alphabet
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    //key individual char check
    int keycheck = 0;
    for (int s = 0, f = strlen(argv[1]); s < f; s++)
    {
        for (int k = s + 1; k < f; k++)
        {
            if (tolower(argv[1][s]) == tolower(argv[1][k]))
            {
                keycheck++;
            }
        }
        if (keycheck !=0)
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }
    }
    
    string key = argv[1];
    //printf("%s", key);
    string p = get_string("plaintext: ");
    printf("ciphertext: ");
    
    //match p[i] to key[m] by p[i] - reverse string length?
    //check plaintext for upper or lower case
    //find difference in ascii from a?
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        char c;
        int m;
        //uppercase plaintext
        if isupper(p[i])
        {
            m = p[i] - 'A';
            if isupper(key[m])
            {
                printf("%c", key[m]);
            }
            else if islower(key[m])
            {
                c = (key[m] - 32);
                printf("%c", c);
            }
        }
        //lowercase plaintext
        else if (islower(p[i]))
        {
            m = p[i] - 'a';
            if islower(key[m])
            {
                printf("%c", key[m]);
            }
            else if isupper(key[m])
            {
                c = (key[m] + 32);
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
