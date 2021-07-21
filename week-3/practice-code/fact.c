/**
 * fact.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Practice code
 * find factorial number
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>


int main (void)
{

  int n = get_int("Number : ");

  int fact = 1;
  int j = 1;

  for (int i = n; i > 0; i--)
  {
       fact =  fact * i;

       printf("%d! %d \n",j++,fact);

  }


  return 1;
}