/**
 * binarysearch.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lecuter code
 * Binary search
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>


#define SIZE 8

bool search(int target, int n[], int size)
{
    int start = 0;
    int end = SIZE - 1 ;


  while (start <= end)
  {
     int middle = (start + end) / 2;

    if (n[middle] == target)
    {
      //printf("Found %d\n",n[middle]);
      return true;
    }
    else if(target < n[middle])
    {
        end = middle - 1;
    }
    else if (target > n[middle])
    {
        start = middle + 1;
    }
  }

    // target is not in haystack
    return false;
}
int main (void)
{

    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };

    int n = get_int(">");
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}