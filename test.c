// #include <stdio.h>

// int main() {
//     int a, b, sum;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum: %d\n", sum);
//     return 0;
// }

#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the operation (+, -, *, /): ");
    
    do {
        op = getchar();
    } while (op == ' ' || op == '\n' || op == '\t');

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Unsupported operator.\n");
    }

    return 0;
}