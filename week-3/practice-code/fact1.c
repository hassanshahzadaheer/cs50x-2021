/**
 * fact1.c
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

int fact(int n);
int main (void)
{

  int n = get_int("Number : ");

    printf("%d\n",fact(n));
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n = n * fact(n - 1);
}
