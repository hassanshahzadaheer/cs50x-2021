/**
 * phonebook1.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lecuter code
 * Search name in array
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>


int main (void)
{
  string names[] = {"Ali","Bilal"};
  string numbers[] = {"+92-345-1234567","+92-31-4456622"};

  for (int i = 0; i < 2; i++)
  {
    if (strcmp(names[i],"Bilal") == 0)
    {
      printf("Found %s\n",numbers[i]);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}