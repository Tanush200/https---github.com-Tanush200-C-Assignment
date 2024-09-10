 #include <stdio.h>
#include <math.h>

// Function prototypes
int isArmstrong(int num);
int countDigits(int num);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    }  

    return 0;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int remainder, result = 0, originalNum, n;

    originalNum = num;
    n = countDigits(num);

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}