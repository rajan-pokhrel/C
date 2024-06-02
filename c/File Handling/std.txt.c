#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("std.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "We are the students of BSC CSIT first semester");

    fclose(file);

    printf("Text written to file successfully.\n");

    return 0;
}
