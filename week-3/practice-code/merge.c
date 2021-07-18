/**
 * merge.c
 *
 * Hassan Shahzad Aheer
 * hassanshahzadaheer@gmail.com
 *
 * practice code
 * merge sort algorithm
 * CS50x-2021
 */

#include <stdio.h>

#define SIZE 8

int temp[SIZE] = {0};

// function to merge array together to produce the sorted list
void merge (int array[], int start, int middle, int end)
{
    // need variable to keep track of left sub array position which is i'th
    int i = start;
    // need variable to keep track of right sub array position which is start of right sub array
    int j = middle + 1;
    // track the starting position of temp array
    int k = start;

    // repeat untill left sub array is less then middle and right sub array till the end
    while (i <= middle && j <= end)
    {
        // check value of i'th sub array is less then right sub array
        if(array[i] <= array[j])
        {
            // place the i'th value into temp array
            temp[k] = array[i];
            // increase the i'th counter and k'th counter
            i++;
            k++;
        }
        else
        {
            // place the right array value to temp
            temp[k] = array[j];
            // increase the i'th counter and k'th counter
            j++;
            k++;
        }
    }

    // check if the middle value get ended then simple put other value into temp
    if(i >= middle)
    {
        // repeat right half sub array till the end.
        while(j <= end)
        {
            // put values to the temp
            temp[k] = array[j];
            // increase the i'th counter and k'th counter
            j++;
            k++;
        }
    }
    else
    {
        //repeat untill middle is less then i'th left sub array
        while(i <= middle)
        {
            // put values to the temp
            temp[k] = array[i];
            i++;
            k++;
        }
    }

    // copy temp array to actual array
    for (int l = start; l <= end; l++)
    {
        array[l] = temp[l];
    }
}

void sort (int array[], int start, int end)
{
    if (end > start)
    {
        int middle = (start + end) / 2;

        // sort left half
        sort(array, start, middle);

        // sort right half
        sort(array, middle + 1, end);

        // merge the two halves
        merge(array, start, middle, end);
    }
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    sort(numbers, 0, SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}