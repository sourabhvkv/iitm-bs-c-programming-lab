#ifndef UTILS_H
#define UTILS_H

int file_get_n_lines(char *filename);

char *file_get_content(char *filename);

#define file_printf_content(filename, template, ...) \
    FILE *f = fopen(filename, "w");\
    fprintf(f, template, __VA_ARGS__);\
    fclose(f);
    
#endif