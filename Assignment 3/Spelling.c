#include <stdio.h>

int main() {
    int number;
    
    // Prompt the user to enter a number
    printf("Enter a number between 0 and 10: ");
    scanf("%d", &number);
    
    // Determine and print the spelling of the number
    switch(number) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 0 and 10.\n");
    }

    return 0;
}