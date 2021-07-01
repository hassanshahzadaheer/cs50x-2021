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


int const NUMBER = 2;
typedef struct
{
  string name;
  string number;
}person;

int main (void)
{
  person people[NUMBER];


  // people[1].name = "Bilal";
  // people[1].number = "+92-321-1234567";


  for (int i = 0; i < NUMBER; i++)
  {
    people[i].name = get_string("What's your name? : ");
    people[i].number = get_string("What's there number? : ");

    if (strcmp(people[i].name,"Bilal") == 0)
    {
      printf("Found %s\n",people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}