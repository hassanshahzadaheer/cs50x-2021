/**
 * number.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lecuter code
 * Linear Search
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>


int main (void)
{
    int numbers[] =  {4, 6, 8, 2, 7, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

