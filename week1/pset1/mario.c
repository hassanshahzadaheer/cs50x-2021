/**
 * mario.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1 
 * Itsa Mario
 *
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{	
	// declare variable to store user input
	int input = 0;
	do
	{
		// prompt to user
		printf("Height : ");
		input = GetInt();
	}
	while(input < 0 || input > 23);   
    
    // repeat statement untill condition false
	for(int i = 1; i < input + 1; i++)                
	{
		// put spaces 
		for(int space = input; space > i; space--)
		{
			printf(" ");
		}
		// display # 
		for(int j = 0; j < i + 1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

