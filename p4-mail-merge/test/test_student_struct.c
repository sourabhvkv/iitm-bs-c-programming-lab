#include <stdio.h>
#include "student.h"

int main()
{
    student_t s = {
        .name = "Nitin C",
        .rollno = "abc123",
        .marks = 50,
        .grade = 'D'};
    print_student(&s);
}
