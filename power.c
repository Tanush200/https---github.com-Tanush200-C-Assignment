#include <stdio.h>

int power(int base, int exponent);

int main() {
    int base, exponent;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using recursion
    int result = power(base, exponent);

    // Output the result
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else {
        return base * power(base, exponent - 1); // Recursive call
    }
}
