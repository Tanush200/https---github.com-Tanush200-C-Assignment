 #include <stdio.h>

struct Company {
    char name[50];
    char address[50];
    char phoneNumber[50];
    int noEmployee;
} company;

int main() {
    

    printf("Enter the name of the company: ");
    scanf("%s", company.name);

    printf("Enter the address of the company: ");
    scanf("%s", company.address);

    printf("Enter the phone number of the company: ");
    scanf("%s", company.phoneNumber);

    printf("Enter the number of employees in the company: ");
    scanf("%d", &company.noEmployee);

    printf("\nCompany Details:\n");
    printf("Name: %s\n", company.name);
    printf("Address: %s\n", company.address);
    printf("Phone Number: %s\n", company.phoneNumber);
    printf("Number of Employees: %d\n", company.noEmployee);

    return 0;
}