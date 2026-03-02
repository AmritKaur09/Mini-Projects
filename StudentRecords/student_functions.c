#include "student_functions.h"

void calculateAverage(Student *s) {
    float sum = 0;
    for(int i = 0; i < MAX_SUBJECTS; i++) {
        sum += s->marks[i];
    }
    s->average = sum / MAX_SUBJECTS;
}