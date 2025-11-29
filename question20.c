#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

// Function to print a Student's details
void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("DOB  : %02d/%02d/%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

int main() {
    struct Student s;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
  
    int len = 0;
    while (s.name[len] != '\0') {
        if (s.name[len] == '\n') {
            s.name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    // Call the function to print the student
    printStudent(s);

    return 0;
}
