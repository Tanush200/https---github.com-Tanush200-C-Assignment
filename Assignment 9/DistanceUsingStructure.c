 #include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    // Input second distance
    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add inches
    sum.inches = d1.inches + d2.inches;

    // Convert excess inches to feet
    sum.feet = d1.feet + d2.feet +(sum.inches / 12);
    sum.inches = sum.inches - (sum.inches / 12) * 12;

    // Print the result
    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}