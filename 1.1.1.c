/*Write a program to search a key element with in the given array of elements using linear search process.

At the time of execution, the program should print the message on the console as:
Enter value of n : 
For example, if the user gives the input as:
Enter value of n : 3
Next, the program should print the messages one by one on the console as:
Enter element for a[0] : 
Enter element for a[1] : 
Enter element for a[2] : 
if the user gives the input as:
Enter element for a[0] : 89
Enter element for a[1] : 33
Enter element for a[2] : 56
Next, the program should print the message on the console as:
Enter key element : 
if the user gives the input as:
Enter key element : 56
then the program should print the result as:
The key element 56 is found at the position 2
Similarly if the key element is given as 25 for the above one dimensional array elements then the program should print the output as "The key element 25 is not found in the array".

Fill in the missing code so that it produces the desired result.*/


#include<stdio.h>
void main() {
	int a[20], i, n, key, flag = 0, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
// Write code to read array elements
	for(i=0;i<n;i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("Enter key element : ");
	scanf("%d", &key);
// Write code for linear search process
	for(i=0;i<n;i++){
		if (a[i] == key){
			flag = 1;
			pos = i;
			break;
		}
	}
	
	if ( flag == 1) { //Write the condition part
		printf("The key element %d is found at the position %d\n", key,pos); //Complete the statement
	} else {
		printf("The key element %d is not found in the array\n", key); //Complete the statement
	}
}
