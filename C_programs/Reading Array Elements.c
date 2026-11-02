#include <stdio.h>

int main() {
    int numbers[5]; // Declares an integer array that can hold 5 elements

    printf("Enter 5 integers:\n");
    // Taking input and storing it in the array
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nDisplaying the elements in the array:\n");
    // Printing each element using its index
    for (int i = 0; i < 5; i++) {
        printf("Index %d = %d\n", i, numbers[i]);
    }

    return 0;
}
