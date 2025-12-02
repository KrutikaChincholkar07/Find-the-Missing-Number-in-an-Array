#include <stdio.h>

int main() {
    int n;

    printf("Enter n (range 1 to n): ");
    scanf("%d", &n);

    int arr[n - 1];
    int actualSum = 0;

    printf("Enter %d numbers:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    printf("Missing number: %d", missing);

    return 0;
}
