#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "student.h"
#include "utils.h"

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        puts(
            "Usage: result-mail-merge student.csv output_dir\n"
            "student.csv should have three columns: name, rollno and marks.");
    }
    // Pointer for the
    student_t *students;
    char *filename = argv[1];
    char *output_dir = argv[2];
    int n_students;

    mkdir(output_dir, S_IRWXU | S_IRWXO | S_IRWXG);

    n_students = get_student_data_from_csv(filename, students);

    // Task 4: Create the template as c string.
    char template[] = "";

    // Loop over all students compute grade and write to name.txt files
    for (int i = 0; i < n_students; i++)
    {
        char filename[100];
        snprintf(filename, 100, "%s/%s.txt");
        student_t *s = &students[i];
        file_printf_content(
            filename, template,
            s->name, s->rollno, s->name, s->marks, s->grade);
    }
}