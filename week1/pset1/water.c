/**
 * water.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * pset 1 
 * Smart Water
 *
 */
#include <stdio.h>
#include <cs50.h>
int main(void)
{
	// prompt to user 
    printf("minutes : ");
    int minutes = GetInt();
    
    // calculation 
    int bottles = (minutes * 12);
    
    // display result
    printf("bottles : %i \n",bottles);
}
