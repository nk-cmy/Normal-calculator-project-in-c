#include <stdio.h>

int main() {
    int a;
    int b;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // printf("Enter operator (+, -, *, /): ");
    // scanf(" %c", &operator);

    switch (operator){
        case '+':
            int a; 
            int b; 
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            int c = a;
            int d = b;
            printf("Result = %.2f\n",a - b);
            break;

        case '*':
            int e = a;
            int f = b;
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0) {
                int g = a;
                int h = b;
                printf("Result = %.2f\n", g / h);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}