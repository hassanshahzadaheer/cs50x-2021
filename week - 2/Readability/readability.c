/**
 * readability.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Pset2
 * Check writing level
 * CS50x-2021
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main (void)
{
    string text = get_string("Text : ");

    float letters = 0.0;
    float words = 1.0;
    float sentence = 0;
    for (int i = 0 , n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters ++;
        }
        if (text[i] == ' ')
        {
            words ++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?' )
        {
            sentence ++;
        }

    }


    float index = round(0.0588 * (100 * letters/words) - 0.296 * (100 * sentence/words) - 15.8);


    if (index > 16)
    {
        printf("Grade 16+");
    }
    else if (index < 1)
    {
        printf("Before Grade 1");
    }
    else
    {
        printf("Grade %d",(int)index);
    }


    printf("\n");
    return 0;
}