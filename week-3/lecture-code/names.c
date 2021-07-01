/**
 * names.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lecuter code
 * Linear Search
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>


int main (void)
{
  string names[] = {"Ali","Bilal","Hassan","Majid","Sajad","Wajid","Yasir"};

  for (int i = 0; i < 7; i++)
  {
    if (strcmp(names[i],"Yasir") == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}