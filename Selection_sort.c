#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {                                       // 0-(n-1)
        // Assume the first unsorted element is the smallest
        minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (j = i + 1; j < n; j++) {                                  //(i+1)-n
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


// PRACTICE

// int Sort(int arr[],int n)
// {
//   for(int i=0;i<n-1;i++)
// { int min=i;
// for(int j=i+1;j<n;j++)
// {
// if(arr[j]<arr[min])
// {
// min=j;
// }
// }
// if(min!=i)
// {
// tem=arr[i];
// arr[i]=arr[min];
// arr[min]=temp;
// }
// ]
// }

// COMPLEXITY
// TIME-0(n2)
// SPACE-0(1)


