#include <stdio.h>

// Function to swap using Call by Value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function to swap using Call by Reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    // Call by Value
    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d\n", x, y);  // No change in values

    // Call by Reference
    printf("\nBefore swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y);  // Values swapped

    return 0;
}