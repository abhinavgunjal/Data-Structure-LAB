//Write a menu-driven program that implements a circular linked list for the following operations:

#include <stdio.h>
        printf("2. Create Circular Linked List 2\n");
        printf("3. Display Circular Linked List 1\n");
        printf("4. Display Circular Linked List 2\n");
        printf("5. Concatenate Lists\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert into List 1 (-1 to stop): ");
                scanf("%d", &data);
                while (data != -1) {
                    head1 = insertEnd(head1, data);
                    scanf("%d", &data);
                }
                break;
            case 2:
                printf("Enter data to insert into List 2 (-1 to stop): ");
                scanf("%d", &data);
                while (data != -1) {
                    head2 = insertEnd(head2, data);
                    scanf("%d", &data);
                }
                break;
            case 3:
                printf("Circular Linked List 1: ");
                displayList(head1);
                break;
            case 4:
                printf("Circular Linked List 2: ");
                displayList(head2);
                break;
            case 5:
                head1 = concatenateLists(head1, head2);
                break;
            case 6:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}
