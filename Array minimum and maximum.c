#include <stdio.h>
int main()
{
 int a[100], n, i, min, max, sum = 0;
 float average;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter array elements:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 sum += a[i];
 }
 min = max = a[0];
 for (i = 1; i < n; i++)
 {
 if (a[i] < min)
 min = a[i];
 if (a[i] > max)
 max = a[i];
 }
 average = (float)sum / n;
 printf("Minimum = %d\n", min);
 printf("Maximum = %d\n", max);
 printf("Average = %.2f\n", average);
 return 0;
