#include <stdio.h>
int sum(int n){
    if (n==0)
    return 0;
    else
    return n+sum(n-1);

}
int main(){
    int n;
    printf("Enter a positive number:");
    scanf("%d", &n);

    if(n < 0){
        printf("Please enter a positive integer!");
        return 1;

    }
    int S = sum(n);
    printf("Sum of first %d natural number :%d\n" , n ,S);

    return 0;
}