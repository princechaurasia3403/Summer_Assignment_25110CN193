#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Deposit Successful!\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}