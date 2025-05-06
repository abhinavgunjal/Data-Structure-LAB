/*Write a program to sort the given elements using insertion sort technique.



Fill in the missing code so that it produces the desired result.*/

#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	// write the for loop to read array elements
	
	// write the for loop to display array elements before sorting
	
	// write the code to sort elements
	
	// write the for loop to display array elements after sorting
 for(i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("Before sorting the elements in the array are\n");
    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }

    for(i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = temp;
    }
    printf("After sorting the elements in the array are\n");
    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
	}
	
}


