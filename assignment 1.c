#include <stdio.h>

int main() {
    int choice;
    int a, b;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Add (+)\n");
    printf("2. Subtract (-)\n");
    printf("3. Multiply (*)\n");
    printf("4. Divide (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (choice == 1)
        printf("Result = %d\n", a + b);
    else if (choice == 2)
        printf("Result = %d\n", a - b);
    else if (choice == 3)
        printf("Result = %d\n", a * b);
    else if (choice == 4)
        printf("Result = %d\n", a / b);
    else if (choice == 5)
        printf("Result = %d\n", a % b);
    else
        printf("Invalid choice\n");

    return 0;
}
