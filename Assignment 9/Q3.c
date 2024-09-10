 #include <stdio.h>

struct Student {
    int RollNo;
    char Name[50];
    char Address[100];
    int Age;
    float AverageMarks;
};

void readStudentData(struct Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].RollNo);

        printf("Name: ");
        scanf("%s", students[i].Name);
 // Use fgets for safer input
        printf("Address: ");
        scanf("%s", students[i].Address); // Use fgets for safer input
        printf("Age: ");
        scanf("%d", &students[i].Age);
        printf("Average Marks: ");
        scanf("%f", &students[i].AverageMarks);
        printf("\n");
    }
}

void displayStudentData(struct Student students[], int numStudents) {
    printf("Student Details:\n");
    printf("----------------\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].RollNo);
        printf("Name: %s\n", students[i].Name);
        printf("Address: %s\n", students[i].Address);
        printf("Age: %d\n", students[i].Age);
        printf("Average Marks: %.2f\n", students[i].AverageMarks);
        printf("\n"); 

    }
}

int main() {
    struct Student students[1];
    int numStudents = 1;

    readStudentData(students, numStudents);
    displayStudentData(students, numStudents);

    return 0;
}