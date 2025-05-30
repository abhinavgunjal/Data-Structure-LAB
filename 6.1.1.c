//Write a C program to implement a menu-driven application that uses a doubly linked list to perform the following operations:



//Operations:

//Create and Insert: Add a number to the doubly linked list.
//Delete: Remove a specific number from the doubly linked list.
//Display: Print the elements of the doubly linked list in order.
//Reverse: Reverse the order of the doubly linked list.
//Exit: The program should terminate when the user chooses this option.


//Input Format:

//The first line of input reads an integer between 0 and 4, representing the chosen operation.
//1: Insert a number. Enter the number to insert when prompted.
//2: Delete a number. Enter the number to delete when prompted.
//3: Display the current elements in the list.
//4: Reverse the list.
//0: Exit the program.


//Output Format:

//The output reads and display appropriate messages for operations performed:
//List elements after insertion, deletion, or reversal.A message when attempting to delete a non-existent number.
#include <stdio.h>
    struct Node* temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d\t", temp->data);
        if (temp->next != NULL) {
            //printf(" ");
        }
        temp = temp->next;
	}
    printf("\n");
}
void reverse() {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }
}





int main() {
    int n, ch;
    do {
        printf("Operations on doubly linked list\n");
        printf("1.Insert\n2.Remove\n3.Display\n4.Reverse\n0.Exit\n");
        printf("Enter Choice 0-4: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                insert(n);
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d", &n);
                remov(n);
                break;
            case 3:
                display();
                break;
            case 4:
                reverse();
                printf("List reversed\n");
                break;
        }
    } while (ch != 0);
    return 0;
}

