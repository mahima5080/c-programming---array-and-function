#include <stdio.h>

long long findFactorial(int num) {
    if (num < 0) return -1; // Factorial of negative numbers doesn't exist
    
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long result = findFactorial(num);

    if (result == -1) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, result);
    }

    return 0;
}
