#include <stdio.h>
#include <stdlib.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee *employees;
    int n, i;

   
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]s", employees[i].name); 
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    
    free(employees);

    return 0;
}


