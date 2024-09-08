#include <stdio.h>
#include <string.h>

int main() {
    char operator[2]; // Assuming operators are single characters
    double num1;
    double num2;
    double result;

    // Now lets work on the calculations

    printf("\nEnter an operator(+ - * /): ");
    scanf("%s", operator);

    printf("Enter Number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter Number 2: ");
    scanf("%lf", &num2);

    switch (operator[0]) { // Access the first character of the operator
        case '+':
            result = num1 + num2;
            printf("\nresult: %lf", result);
            break;

        // ... other cases remain the same

        default:
            printf("%s is not valid", operator);
    }

    return 0;
}