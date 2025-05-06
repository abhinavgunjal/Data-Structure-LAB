//Write a menu-driven C program that implements a doubly linked list for the following operations:

//Create two lists
//Display lists
//Concatenate

#include <stdio.h>
        append(list1, data);
        char c = getchar();
        if (c == '\n') break;
    }

    printf("Elements for List 2 (separated by spaces): ");
    while (1) {
        scanf("%d", &data);
        append(list2, data);
        char c = getchar();
        if (c == '\n') break;
    }

    while (1) {
        printf("1. Display List 1\n");
        printf("2. Display List 2\n");
        printf("3. Concatenate\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("List 1: ");
                displayList(list1);
                break;
            case 2:
                printf("List 2: ");
                displayList(list2);
                break;
            case 3:
                concatenate(list1, list2);
                printf("Lists Concatenated\n");
                break;
            case 4:
                free(list1);
                free(list2);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
