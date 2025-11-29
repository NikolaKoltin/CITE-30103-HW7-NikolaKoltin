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
        int c; while ((c = getchar()) != '\n' && c != EOF); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        

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

    // Find student with highest marks
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name : %s\n", students[maxIndex].name);
    printf("Roll : %d\n", students[maxIndex].roll);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
