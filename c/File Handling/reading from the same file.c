#include <stdio.h>

struct student {
    int id;
    char name[50];
    char address[100];
    char faculty[50];
};

int main() {
    struct student records[20];
    FILE *file;
    int i;

    // Writing records to the file
    file = fopen("record.txt", "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter details of 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &records[i].id);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("Address: ");
        scanf("%s", records[i].address);
        printf("Faculty: ");
        scanf("%s", records[i].faculty);

        fprintf(file, "%d %s %s %s\n", records[i].id, records[i].name, records[i].address, records[i].faculty);
    }
    fclose(file);

    // Displaying records from the file
    file = fopen("record.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nRecords of 20 students:\n");
    while (fscanf(file, "%d %s %s %s", &records[i].id, records[i].name, records[i].address, records[i].faculty) != EOF) {
        printf("ID: %d, Name: %s, Address: %s, Faculty: %s\n", records[i].id, records[i].name, records[i].address, records[i].faculty);
    }
    fclose(file);

    return 0;
}
