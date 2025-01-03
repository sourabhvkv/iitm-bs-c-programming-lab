#include <stdio.h>
#include "student.h"

#define MAX_STUDENTS 100

int main()
{
    student_t *students;

    int n = get_student_data_from_csv("students.csv", students);

    for (int i = 0; i < n; i++)
    {
        student_t *s = &students[i];
        print_student(s);
    }
}
