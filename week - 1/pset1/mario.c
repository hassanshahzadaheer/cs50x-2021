/**
 * mario.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1
 * It's a Mario
 *
 *     #
      ##
     ###
    ####
   #####
  ######
 #######
########

 */

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // declare variable to store user input
    int height = 0;

    do
    {
        // prompt to user
        height = get_int("Height: ");

    }while (height <= 0 || height >= 9);

    // repeat statement untill condition false
    for (int i = 0; i < height; i++)
    {
        // put spaces
        for (int s = height - 1; s > i ; s--)
        {
            printf(" ");
        }
        // display #
        for (int j = 0; j <= i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}