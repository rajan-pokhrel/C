#include <stdio.h>
#include <string.h>
struct student{
    int id;
    char name[50];
    char address[50];
    float fee[50];
};

int main(){
    int num_students;
    printf("Enter the number of student: ");
    scanf("%d" , num_students);
    struct student students[num_students];
    int i;
    for(i=0;i<num_students; i++){
        printf("Enter details for student : \n" , i+1);
        printf("ID:");
         scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Fee: ");
        scanf("%f", &students[i].fee);
    }

    printf("\nStudents from KATHMANDU:\n");
    for (i = 0; i < num_students; i++) {
        if (strcmp(students[i].address, "KATHMANDU") == 0) {
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Address: %s\n", students[i].address);
            printf("Fee: %.2f\n", students[i].fee);
            printf("\n");
        }
    }

    return 0;

}