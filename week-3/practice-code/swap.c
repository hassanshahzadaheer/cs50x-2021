/**
 * swap.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * practice code
 * swap
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>


int main (void)
{

    int arr[] = {5,2,1,3,6,4};
    int x = 5;
    int y = 3;


    printf ("Before swap (x = %d and y = %d)\n ",x,y);


    x = x + y;
    y = x- y;
    x = x- y;

    printf ("After swap (x = %d and y = %d)\n ",x,y);

}