// 8.c structs demo
#include<stdio.h>
#include<stdlib.h>
typedef struct s {
    int roll;
    char* name;
} Student;

void main() {
    Student* student = (Student*) malloc(sizeof(Student));
    student->roll = 50;
    student->name = "Cijo";
    printf("%s\t%d\n", student->name, student->roll);
}