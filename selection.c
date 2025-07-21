#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Swap two values
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Print the current state of the boxes
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("[%dkg] ", arr[i]);
    }
    printf("\n");
}