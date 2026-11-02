#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    int arr[n]; // Variable length array based on user input

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    average = sum / n;

    printf("\nSum of elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}
