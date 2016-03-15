/** 
 * f2c.c
 * 
 * Hassan Shahzad Aheer
 * Hassanshahzadaheer@gmail.com
 * 
 * to convert fahrenheit to celsius
**/

#include <stdio.h>
#include <cs50.h>

int main (void)
 {
     printf("Tempature in fahrenheit : ");
     float f = GetFloat();
     
     // formula or calculation to convert
     float c = 5.0 / 9.0 * (f - 32.0);
     
     printf("%.2f Celsius \n", c);
     
    
 }