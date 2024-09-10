 #include <stdio.h>

int main() {
    char arr[] = {'B', 'T', 'E', 'C', 'H'};
    

    for (int i = 0; i < 5; i++) {
        // Print leading spaces
        for (int space = 0; space < 5 - i - 1; space++) {
            printf("  ");
        }

        // Print characters
        for (int j = 0; j <= i; j++) {
            printf("%c ", arr[j]);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}