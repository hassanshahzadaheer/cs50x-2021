/** 
 * nonswitch.c
 * 
 * Hassan Shahzad Aheer
 * Hassanshahzadaheer@gmail.com
 * 
 * to learn about boolean operators 
**/

#include <stdio.h>
#include <cs50.h>

int main (void)
 {
     printf("Give me an integer : ");
     int n = GetInt();
     
     if (n >= 1 && n <= 3)
     {
         printf("You picked a small number : \n");
     }
     else if (n >= 4 && n <= 6) 
     {
         printf("You picked a medium number \n");
     }
     else if (n >= 7 && n <= 10)
     {
         printf("You picked a larger number \n");
     }
     else
     {
         printf("Sorry ! your number is out of limit \n");
     }
 }