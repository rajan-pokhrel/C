#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
        return 1; // Indicate an error
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    unsigned long long fact = factorial(num);
    printf("Factorial of %d is %llu.\n", num, fact);

    return 0;
}
