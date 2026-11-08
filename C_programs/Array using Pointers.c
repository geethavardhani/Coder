/* Experiment 12 - Array Input Using Pointer */
#include <stdio.h>
int main()
{
 int a[100], *p;
 int n, i;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 p = a;
 printf("Enter array elements:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", p + i);
 }
 printf("Array elements are:\n");
 for (i = 0; i < n; i++)
 {
 printf("%d ", a[i]);
 }
 printf("\n");
 return 0;
}
