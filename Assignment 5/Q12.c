#include <stdio.h>

int main() {
    int rows = 4; // Number of rows

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}