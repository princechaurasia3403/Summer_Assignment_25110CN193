#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudents(struct Student s[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n) {
    int i;

    printf("\n------ Student List ------\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll : %d", s[i].roll);
        printf("\nName : %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
}

int searchStudent(struct Student s[], int n, int roll) {
    int i;

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found");
            printf("\nName : %s", s[i].name);
            printf("\nMarks: %.2f\n", s[i].marks);
            return 1;
        }
    }

    printf("\nStudent Not Found\n");
    return 0;
}

int main() {
    struct Student s[10];
    int n, roll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudents(s, n);

    displayStudents(s, n);

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);

    searchStudent(s, n, roll);

    return 0;
}