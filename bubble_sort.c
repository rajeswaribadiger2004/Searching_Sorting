#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // No swaps at the start of this pass

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Swap happened
            }
        }

        // If no swaps, break out early (array is sorted)
        if (swapped == 0) {
            break;
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
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

// PRACTICE

// #include<stdio.h>
// int Sort(int arr[],int n)
// {
//   int i,j,temp;
// swapped=0;
// for(i=0;i<n;i++)
// {
// for(j=0;j<=n-i-1;j++)
// {
// if(arr[j]>arr[j+1])
// {
// temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;
// swapped=1;
// }
// }
// void print(arr[],int n)
// {
//   for(i=0;i<n;i++)
// {
// printf(%d",&n);
//   }
// }
// int main()
// {
//   int arr[]={2,9,3,7,5};
// int n=sizeof(arr)/sizeof(arr[]);
// sort(arr,n);
// print(arr,n);
// return 0;
// }

// Complexity
// time=0(n)/0(n2)
// space=0(1)
