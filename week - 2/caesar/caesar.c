/**
 * caeasr.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Pset2
 * Security of words
 * CS50x-2021
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if(!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }

        }

        int k = atoi(argv[1]);

        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (islower(plaintext[i]))
                {
                    printf("%c",(((plaintext[i] - 97 + k) % 26) + 97));
                }
                else
                {
                    printf("%c",(((plaintext[i] - 65 + k) % 26) + 65));
                }

        }
        else
        {
            printf("%c",plaintext[i]);
        }

        }
    }

    printf("\n");

    return 0;
}