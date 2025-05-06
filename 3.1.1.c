/*Write a program to sort (Ascending order) the given elements using merge sort technique.

At the time of execution, the program should print the message on the console as:
Enter array size : 
For example, if the user gives the input as:
Enter array size : 5
Next, the program should print the following message on the console as:
Enter 5 elements : 
if the user gives the input as:
Enter 5 elements : 34 67 12 45 22
then the program should print the result as:
Before sorting the elements are : 34 67 12 45 22 
After sorting the elements are : 12 22 34 45 67 
Note: Do use the printf() function with a newline character (\n).*/

#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int leftArr[n1], rightArr[n2];
    
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;

        k++;
    }
}

void splitAndMerge(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        splitAndMerge(arr, left, mid);
        splitAndMerge(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
