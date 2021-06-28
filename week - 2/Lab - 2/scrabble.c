/**
 * scrabble.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lab 2
 * Words Game
 * CS50x-2021
 */

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // check whether player 1 Win
    if (score1 > score2)
    {
        printf("Player1 Win!\n");

    }
    // check whether player 2 Win
    else if (score2 > score1)
    {
        printf("Player2 Win!\n");
    }
    else
    // check player tie
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // initialize score
    int score = 0;
    // loop through until word length
    for (int i = 0; i < strlen(word); i++)
    {
        // store matching word
        char alpha_map = word[i];

        // process for lower cases
        if(islower(alpha_map))
        {
            score += POINTS[word[i] - 'a'];
        }
        // process for upper cases
        if(isupper(alpha_map))
        {
            score += POINTS[word[i] - 'A'];
        }

    }

    // return score
    return score;
}

