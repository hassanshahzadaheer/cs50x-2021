/**
 * Bitwise.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * https://study.cs50.net/ascii 
 * Bitwise Capitalization
 *
 */

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Collect user input
    printf("Please enter an alphabetical character: ");
    char input = GetChar();
    char result = 0;
    
    // If the letter is lowercase
    if (input >= 97 && input <= 122)
    {
        result = input - 32;
        printf("%c\n", result );
    }
    
    
}