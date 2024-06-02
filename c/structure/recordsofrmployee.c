#include <stdio.h>
#include <string.h>

struct Employee { int id; char name[50]; char address[100]; float salary; };

int main() {
    struct Employee employees[100];
    int num_employees, i;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    
    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d (ID Name Address Salary): ", i + 1);
        scanf("%d %s %s %f", &employees[i].id, employees[i].name, employees[i].address, &employees[i].salary);
    }

   
    printf("\nEmployees with salary greater than 700000:\n");
    for (i = 0; i < num_employees; i++) {
        if (employees[i].salary > 700000) {
            printf("ID: %d\nName: %s\nAddress: %s\nSalary: %.2f\n\n", employees[i].id, employees[i].name, employees[i].address, employees[i].salary);
        }
    }

    return 0;
}
