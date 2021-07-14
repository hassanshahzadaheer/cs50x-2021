/**
 * swapCounter.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * practice code
 * Bubble sort
 * CS50x-2021
 */


 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

 #define SIZE 8


void bubble_sort(int array[], int size)
{
    int swapCounter = -1;

     while (swapCounter != 0)

    {
        swapCounter = 0;

        for (int i = 0; i <= 5 - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                array[i] = array[i] + array[i + 1];
                array[i+1] = array[i] - array[i + 1];
                array[i] = array[i] - array[i + 1];

                swapCounter ++;

            }
        }
    }
}

int main (void)
{

    int elements[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108};

    printf ("Before ");

    for (int i = 0; i <= 5; i++)
    {
        printf("%d ",elements[i]);
    }

    bubble_sort(elements,SIZE);
    printf("\n");

    printf ("After ");

    for (int i = 0; i <= 5; i++)
    {
        printf("%d ",elements[i]);
    }


}