#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks from the user
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Determine the grade based on the marks
    if (marks >= 90 && marks <= 100) {
        grade = 'O';
    } else if (marks >= 80 && marks < 90) {
        grade = 'E';
    } else if (marks >= 70 && marks < 80) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else if (marks < 40) {
        grade = 'F';
    } else {
        printf("Invalid marks entered.\n");
        return 1; // Exit the program with an error code
    }

    // Display the grade
    printf("Grade: %c\n", grade);

    return 0;
}