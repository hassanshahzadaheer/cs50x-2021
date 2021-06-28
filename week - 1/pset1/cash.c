/**
 * cash.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1
 * Time For Change
 * CS50x-2021
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main (void)
{


    float dollars = 0.0;

    // declare variables
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int coin = 0;

    do
    {
        // prompt to user for input
        dollars= get_float("Change owed : ");

    }while(dollars <= 0);

    // conver the userinput into integer
    int cents = round(dollars * 100);


    // when userinput >= 25
    while (cents >= quarters)
    {
        cents = cents - quarters;
        coin ++;

    }
    // when userinput >= 10
    while (cents >= dimes)
     {
         cents = cents - dimes;
         coin ++;

     }
    // when userinput >= 5
    while (cents >= nickels)
     {
         cents = cents - nickels;
         coin ++;

     }
    // when userinput >= 1
    while (cents >= pennies)
     {
         cents = cents - pennies;
         coin ++;

     }

    printf("%i\n",coin);
    return 0;
}