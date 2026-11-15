/* Character Position in String */
#include <stdio.h>
#include <string.h>
int main()
{
 char str[100], ch;
 int i, position;
 printf("Enter a string: ");
 scanf("%s", str);
 printf("Enter character to search: ");
 scanf(" %c", &ch);
 for (i = 0; str[i] != '\0'; i++)
 {
 if (str[i] == ch)
 {
 position = i;
 break;
 }
 }
 printf("Position = %d\n", position);
 return 0;
}
