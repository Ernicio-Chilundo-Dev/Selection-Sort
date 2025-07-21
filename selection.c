#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

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

// Selection sort algorithm
void selection_sort(int boxes[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (boxes[j] < boxes[min_index])
            {
                min_index = j;
            }

            if (min_index != i)
            {
                printf("Swapping [%dkg] with [%dkg] \n", boxes[i], boxes[min_index]);
                swap(&boxes[i], &boxes[min_index]);
            }
            print_array(boxes, n);
        }
    }
}

// Main Function
int maiin(void)
{
    // Initialize random weights for thes boxes
    int boxes[SIZE];
    srand(time(NULL)); // initialize random numbers

    for (int i = 0; i < SIZE; i++)
    {
        boxes[i] = rand() % 50 + 1; // Initialize weights 1 to 50 kg
    }
    

}