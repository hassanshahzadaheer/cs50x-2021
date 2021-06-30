/**
 * population.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lab 1
 * CS50x-2021
 *
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // store value for start
    int start;
    do
    {
      // prompt user for intpu
      start = get_int("Start size: ");
    }
    while (start < 9);

    // store value for end
    int end;
    do
    {
      end = get_int("End size: ");
    }
    while ( end < start);

    int years = 0;

    while (start < end)
    {
      // 1200 + 400 - 300 = 1300
      start = start + (start/3) - (start/4);
      
      // increase years
      years ++ ;

    }
    
    // print years
    printf("Years: %i\n", years);




}