#include <stdio.h>

int correctPIN = 1234;
float balance = 0.0;

void balanceEnquiry() {
    printf("\nYour current balance is: %.2f\n", balance);
}

void deposit() {
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Deposit must be positive.\n");
    } else {
        balance += amount;
        printf("Deposit successful! New balance: %.2f \n", balance);
    }
}

void withdraw() {
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Withdrawal must be positive.\n");
    } else if (amount > balance) {
        printf("Insufficient balance! Your balance is %.2f\n", balance);
    } else {
        balance -= amount;
        printf("Withdrawal successful! New balance: %.2f\n", balance);
    }
}

int main() {
    int pin, attempts = 0;


    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPIN) {
            printf("Access Granted!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN! Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Too many attempts. Access Denied. Exiting...\n");
        return 0;
    }

    int choice;


    while (1) {
        printf("\n==== MAIN MENU ====\n");
        printf("1. Balance Enquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                balanceEnquiry();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                printf("Exiting system  Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
