#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of factorial is %d", factorial);
    return 0;
}