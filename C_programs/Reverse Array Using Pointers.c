#include <stdio.h>
int main()
{
 int a[100], *p;
 int n, i;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter array elements:\n");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 p = a + n - 1;
 printf("Array in reverse order:\n");
 for (i = n - 1; i >= 0; i--)
 {
 printf("%d ", *p);
 p--;
 }
 printf("\n");
 return 0;
}
