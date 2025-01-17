#include <stdio.h>


struct Student {
    char name[50];
    int age;
    float totalMarks;
};


void inputStudentData(struct Student *s) {
    printf("Enter name: ");
    scanf(" %[^\n]s", s->name); 
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter total marks: ");
    scanf("%f", &s->totalMarks);
}


void displayStudentData(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Total Marks: %.2f\n", s.totalMarks);
}

int main() {
    struct Student student1, student2;
    float averageMarks;

   
    printf("Enter details for Student 1:\n");
    inputStudentData(&student1);

   
    printf("\nEnter details for Student 2:\n");
    inputStudentData(&student2);

   
    printf("\nDetails of Student 1:\n");
    displayStudentData(student1);

    printf("\nDetails of Student 2:\n");
    displayStudentData(student2);

    
    averageMarks = (student1.totalMarks + student2.totalMarks) / 2;

    printf("\nAverage of total marks: %.2f\n", averageMarks);

    return 0;
}
