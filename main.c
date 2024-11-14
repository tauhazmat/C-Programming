#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    // Prompt the user for input
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Division: %.2f\n", quotient);
    } else {
        printf("Division: Cannot divide by zero.\n");
    }

    // Display results
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", difference);
    printf("Multiplication: %.2f\n", product);

    return 0;
}
