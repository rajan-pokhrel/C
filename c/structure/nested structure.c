#include <stdio.h>

// Define structure for address
struct address {
    char street[50];
    char city[50];
    char state[50];
};

// Define structure for person
struct person {
    char name[50];
    int age;
    struct address addr; // Nested structure
};

int main() {
    // Declare and initialize a person structure
    struct person p1 = {"John", 30, {"123 Main St", "New York", "NY"}};

    // Display information using nested structure
    printf("Person Information:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Address: %s, %s, %s\n", p1.addr.street, p1.addr.city, p1.addr.state);

    return 0;
}
