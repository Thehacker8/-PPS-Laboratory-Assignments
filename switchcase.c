#include <stdio.h>

int main() {
    int choice, a, b;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            printf("Product = %d\n", a * b);
            break;
        case 4:
            printf("Quotient = %d\n", a / b);
            break;
        case 5:
            printf("Remainder = %d\n", a % b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
