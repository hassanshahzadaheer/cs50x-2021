/**
 * odd.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * practice code
 * check numner for even and odd
 * CS50x-2021
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // getting input from user
    int n = get_int("Enter a number ");

    // check for the remender
    if( n % 2 == 0)
        printf("Even number\n");
    else
        printf("ODD Number\n");

}