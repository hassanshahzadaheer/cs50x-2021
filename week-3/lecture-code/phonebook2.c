/**
 * phonebook2.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * Lecuter code
 * Custom datatype
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

typedef struct
{
  string name;
  string number;
}person;

int main (void)
{
  person people[2];

  people[0].name = "Ali";
  people[0].number = "+92-345-2333122";

  people[1].name = "Bilal";
  people[1].number = "+92-321-1234567";


  for (int i = 0; i < 2; i++)
  {
    if (strcmp(people[i].name,"Bilal") == 0)
    {
      printf("Found %s\n",people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}