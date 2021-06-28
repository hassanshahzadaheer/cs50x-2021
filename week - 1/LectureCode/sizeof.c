/** 
 * sizeof.c
 * 
 * Hassan Shahzad Aheer
 * Hassanshahzadaheer@gmail.com
 * 
 * to check the size of all data types
**/

#include <stdio.h>
#include <cs50.h>

int main (void)
 {
    int i;
    float f;
    double d;
    char c;
    
    printf("int    : %lu \n",sizeof(i));
    printf("float  : %lu \n",sizeof(f));
    printf("double : %lu \n",sizeof(d));
    printf("char   : %lu \n",sizeof(c));
    
    
 }