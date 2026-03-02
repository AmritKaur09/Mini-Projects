#ifndef STUDENT_FUNCTIONS_H
#define STUDENT_FUNCTIONS_H

#define MAX_SUBJECTS 5

typedef struct {
    int roll;
    char name[50];
    float marks[MAX_SUBJECTS];
    float average;
} Student;

void calculateAverage(Student *s);

#endif