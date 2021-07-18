#include <stdio.h>

#define SIZE 8

void sort(int array[], int size)
{
    int min = 0;
    // for i = 1 to size - 2
    for(int i = 0; i < (size - 2); i++)
    {
        // for now, set min = i
         min = i;

        // compare min to all other elements in unsorted subarray
        for(int j = (i + 1); j < size - 1; j++)
        {
            // if you find an even smaller element, that is now min
            if(array[j] < array[min])
            {
                min = j;
            }
        }

        // array[min] = array[min] + array[i];
        // array[i] = array[min] - array[i];
        // array[min] = array[min] - array[i];

        // swap to put min in correct position
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}