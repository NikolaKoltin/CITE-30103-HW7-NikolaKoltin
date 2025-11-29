#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

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

    printf("\nStudent Details:\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
