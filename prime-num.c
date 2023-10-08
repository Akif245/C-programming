#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    
    // Input the range from the user
    printf("Enter the range (a and b): ");
    scanf("%d %d", &a, &b);
    
    printf("Prime numbers between %d and %d are:\n", a, b);
    
    // Find and print prime numbers in the range
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

