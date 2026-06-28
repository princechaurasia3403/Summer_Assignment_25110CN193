#include <stdio.h>

int main() {
    int choice;
    char name[50];
    char phone[15];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Phone Number: ");
                scanf("%s", phone);

                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                printf("\nSaved Contact\n");
                printf("Name : %s\n", name);
                printf("Phone: %s\n", phone);
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}