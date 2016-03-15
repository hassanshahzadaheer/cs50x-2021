/** 
 * condition.c
 * 
 * Hassan Shahzad Aheer
 * Hassanshahzadaheer@gmail.com
 * 
 * to learn about the if-else condition
**/

#include <stdio.h>
#include <cs50.h>

int main (void)
 {
     printf("Give me an integer : ");
     int n = GetInt();
     
     if (n > 0)
     {
         printf("Thanks for positive number \n");
     }
     else if (n == 0) 
     {
         printf("it's zero \n");
     }
     else 
     {
         printf("Sorry ! it's negative number \n");
     }
 }