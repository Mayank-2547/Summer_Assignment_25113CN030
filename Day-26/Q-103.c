#include <stdio.h>
int main() {
    int choice;
    int balance = 10000.0, amount;
    while (1) {
        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Current Balance: Rs %d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Rs %d deposited successfully.\n", amount);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } 
                else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } 
                else {
                    balance -= amount;
                    printf("Rs %d withdrawn successfully.\n", amount);
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}