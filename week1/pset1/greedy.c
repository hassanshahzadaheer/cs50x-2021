/**
 * greedy.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1 
 * Time For Change
 *
 */
#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
	// declare variables 
	int quarter = 25, dimes = 10, nickels = 5, pennies = 1;
	int coin = 0, amount = 0;
	float userInput = 0.0;
	do
	{
		// prompt to user for input
		printf("O hai! How much change you owed? \n");
		userInput = GetFloat();
		
		// conver the userinput into integer 
		amount = (int) round(userInput * 100);
		
	}while(amount < 0);
	
	// do process untill the amount < 0
	while (true) 
	{
		// when userinput >= 25 
		if (amount >= quarter)
		{
			coin ++;
			amount = amount - quarter;
			continue;
		}
		
		// when userinput >= 10 
		if (amount >= dimes)
		{
			coin ++;
			amount = amount - dimes;
			continue;
		}
	
		// when userinput >= 5 
		if (amount >= nickels)
		{
			coin ++;
			amount = amount - nickels;
			continue;
		}		
		// when userinput >= 1 
		if (amount >= pennies)
		{
			coin ++;
			amount = amount - pennies;
			continue;
		}	
		break;
	}
		// display total coin 
		printf("%d\n",coin);
}
