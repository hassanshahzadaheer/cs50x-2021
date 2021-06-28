/**
 * hello.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1
 * CS50x-2021
 *
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter your name ? ");
    printf("hello, %s \n", name);
}