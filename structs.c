#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef struct {
    char name[50];
    int age;
    float gpa;
    bool is_full_time;
}Student;

void print_student(Student student_status);

int main(){

    Student student_1 = {"Sponagebob", 30, 2.5, true};
    Student student_2 = {"Patrick", 36, 1.0, false};
    Student student_3 = {"Squidward", 48, 3.2, false};
    Student student_4 = {0};

    strcpy(student_4.name, "Sanday");
    student_4.age = 27;
    student_4.gpa = 4.0;
    student_4.is_full_time = true;

    printf("%s\n", student_1.name);
    printf("%d\n", student_1.age);
    printf("%.2f\n", student_1.gpa);
    printf("%s\n", (student_1.is_full_time) ? "Yes" : "No");
    printf("\n");

    printf("%s\n", student_2.name);
    printf("%d\n", student_2.age);
    printf("%.2f\n", student_2.gpa);
    printf("%s\n", (student_2.is_full_time) ? "Yes" : "No");
    printf("\n");

    printf("%s\n", student_3.name);
    printf("%d\n", student_3.age);
    printf("%.2f\n", student_3.gpa);
    printf("%s\n", (student_3.is_full_time) ? "Yes" : "No");
    printf("\n");

    printf("%s\n", student_4.name);
    printf("%d\n", student_4.age);
    printf("%.2f\n", student_4.gpa);
    printf("%s\n", (student_4.is_full_time) ? "Yes" : "No");
    printf("\n");

    printf("The following is from the function:\n");
    print_student(student_1);
    print_student(student_2);
    print_student(student_3);
    print_student(student_4);

    return 0;
}

void print_student(Student student_status){ 
    printf("Name: %s\n", student_status.name);
    printf("Age: %d\n", student_status.age);
    printf("GPA: %.2f\n", student_status.gpa);
    printf("Full-time: %s\n", (student_status.is_full_time) ? "Yes" : "No");
    printf("\n");
}