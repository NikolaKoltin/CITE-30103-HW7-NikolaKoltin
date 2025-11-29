#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        // Clear input buffer
        int c; while ((c = getchar()) != '\n' && c != EOF);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        // Remove newline character
        int len = 0;
        while (students[i].name[len] != '\0') {
            if (students[i].name[len] == '\n') {
                students[i].name[len] = '\0';
                break;
            }
            len++;
        }

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
