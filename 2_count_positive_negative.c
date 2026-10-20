#include <stdio.h>

void countNumbers(int arr[], int size) {
    int positive = 0, negative = 0, zeros = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zeros++;
        }
    }

    printf("\n--- Summary --- \n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zeros);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countNumbers(arr, n);

    return 0;
}
