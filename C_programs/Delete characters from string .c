/* Delete Characters from String */
#include <stdio.h>
#include <string.h>
void deleteChars(char str[], int pos, int n)
{
 int i;
 for (i = pos; str[i + n] != '\0'; i++)
 {
 str[i] = str[i + n];
 }
 str[i] = '\0';
}
int main()
{
 char str[200];
 int pos, n;
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 str[strcspn(str, "\n")] = '\0';
 printf("Enter position: ");
 scanf("%d", &pos);
 printf("Enter number of characters to delete: ");
 scanf("%d", &n);
 deleteChars(str, pos, n);
 printf("String after deletion: %s\n", str);
 return 0;
}
