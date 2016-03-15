/** 
 * adder.c
 * 
 * Hassan Shahzad Aheer
 * Hassanshahzadaheer@gmail.com
 * 
 * to learn about the cs50 library
**/

#include <stdio.h>
#include <cs50.h>

int main (void) 
{
    // geting input from user
    printf("Give me an integer : ");
    int x = GetInt();
    
    // geting input from user
    printf("Give me an integer : ");
    int y = GetInt();
    
    // calculation on the getting varibles 
    printf("The sum of %d and %d is %d \n", x, y,(x + y));
}