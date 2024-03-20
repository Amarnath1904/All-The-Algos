#include <stdio.h>

// Function to perform selection sort on an array
// arr[]: the array to be sorted
// n: the number of elements in the array
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    // Loop through all elements of the array except the last one
    for (i = 0; i < n-1; i++) {
        // Assume the first unsorted element is the minimum
        min_idx = i;

        // Loop through the remaining elements to find the true minimum
        for (j = i+1; j < n; j++) {
            // Update min_idx if a smaller element is found
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element with the first unsorted element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the elements of the array
// arr[]: the array to be printed
// size: the number of elements in the array
void printArray(int arr[], int size) {
    int i;
    // Loop through the array and print each element
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code to test the selectionSort function
int main() {
    // Example array to be sorted
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the number of elements in the array

    // Call the selection sort function
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
