#include<stdio.h>
int main() {
    int day;
    printf("Enter a day (1 to 3): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
     return 0;
}