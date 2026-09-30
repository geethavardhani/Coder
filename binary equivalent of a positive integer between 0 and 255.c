#include <stdio.h>
int main()
{
int n, binary[8], i;
printf("Enter a number between 0 and 255: ");
scanf("%d", &n);
if (n < 0 || n > 255)
{
printf("Invalid input.\n");
return 0;
}
if (n == 0)
{
printf("Binary = 00000000\n");
return 0;
}
for (i = 0; i < 8; i++)
{
binary[i] = n % 2;
n = n / 2;
}
printf("Binary = ");
for (i = 7; i >= 0; i--)
printf("%d", binary[i]);

printf("\n");
return 0;
}
