# Selection Sort Visualization in C

This program demonstrates the **Selection Sort** algorithm by sorting an array of randomly generated box weights. It prints the state of the array before, during, and after sorting, showing the swapping steps clearly.

## Features

- Generates an array of 6 random box weights between 1kg and 50kg.
- Implements the **Selection Sort** algorithm to sort the boxes by weight in ascending order.
- Displays the array after each swap operation to visualize the sorting process.
- Uses helper functions to swap elements and print the array state.

## How It Works

1. The program initializes an array `boxes` with random weights.
2. It prints the initial unsorted array.
3. The `selection_sort()` function sorts the array using the selection sort method:
    - Finds the minimum element in the unsorted portion.
    - Swaps it with the first unsorted element.
    - Prints each swap and the array state after every iteration.
4. Finally, it prints the fully sorted array.

## Usage

### Compilation

Make sure you have a C compiler (like `gcc`) installed, then run:

```bash
gcc selection.c -o selection


### Running

./selection

### Example Output


Boxes before sorting:
[23kg] [7kg] [45kg] [12kg] [9kg] [30kg] 

Sorting boxes by weight...

Swapping [23kg] with [7kg] 
[7kg] [23kg] [45kg] [12kg] [9kg] [30kg] 
Swapping [23kg] with [9kg] 
[7kg] [9kg] [45kg] [12kg] [23kg] [30kg] 
...

Sorted boxes:
[7kg] [9kg] [12kg] [23kg] [30kg] [45kg]

