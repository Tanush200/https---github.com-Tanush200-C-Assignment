 
#include <stdio.h>

int main() {
    int num1, num2;
    float result;  // Use float for division result

    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    result = (float)num1 / num2;  // Cast to float for accurate division

    // Print results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    // Check for division by zero and print result accordingly
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        printf("Division: %.2f\n", result);  // Print division result with 2 decimal places
    }

    return 0;
}