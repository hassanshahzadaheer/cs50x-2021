/**
 * collatz.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * practice code
 * program to understand recursion
 * CS50x-2021
 */

#include <stdio.h>
#include <cs50.h>

int coltaz(int n);

int main(void)
{
    // getting input from user
    int n = get_int("Enter a number ");
    coltaz(n);

}

int coltaz(int n)
{
    // if given number is one quit the program
    if (n == 1)
        return 0;
    // if input is even do n/2 otherwise 3*n + 1 steps
    if( n % 2 == 0)
    {
        printf("%d ",n);
        return 1 + coltaz (n/2);
    }
    else
    {
        printf("%d ",n);
        return 1 + coltaz (3*n + 1) ;

    }
    return n;
}
