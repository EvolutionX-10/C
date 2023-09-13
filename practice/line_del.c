// write a c program that takes input file name, line number, and delete the line from the file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    printf("Enter the input file name: ");
    scanf("%s", filename);

    int line_num;
    printf("Enter the line number to delete: ");
    scanf("%d", &line_num);

    // Open the input file
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open file %s\n", filename);
        return 1;
    }

    // Open a temporary file for writing
    FILE *tmp = fopen("temp.txt", "w");
    if (tmp == NULL) {
        printf("Error: could not open temporary file\n");
        return 1;
    }

    // Copy the input file to the temporary file, omitting the specified line
    int curr_line = 1;
    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        if (curr_line != line_num) {
            fputs(line, tmp);
        }
        curr_line++;
    }

    // Close the input and temporary files
    fclose(fp);
    fclose(tmp);

    // Delete the original file and rename the temporary file
    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d deleted successfully from file %s\n", line_num, filename);

    return 0;
}
