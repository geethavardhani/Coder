#include <stdio.h>
#include <string.h>
void insertString(char mainStr[], char subStr[], int pos)
{
 char temp[200];
 int i, j, len;
 len = strlen(mainStr);
 for (i = 0; i < pos; i++)
 temp[i] = mainStr[i];
 for (j = 0; subStr[j] != '\0'; j++)
 temp[i++] = subStr[j];
 for (j = pos; mainStr[j] != '\0'; j++)
 temp[i++] = mainStr[j];
 temp[i] = '\0';
 strcpy(mainStr, temp);
}
int main()
{
 char mainStr[200], subStr[100];
 int pos;
 printf("Enter main string: ");
 fgets(mainStr, sizeof(mainStr), stdin);
 mainStr[strcspn(mainStr, "\n")] = '\0';
 printf("Enter substring: ");
 fgets(subStr, sizeof(subStr), stdin);
 subStr[strcspn(subStr, "\n")] = '\0';
 printf("Enter position: ");
 scanf("%d", &pos);
 insertString(mainStr, subStr, pos);
 printf("String after insertion: %s\n", mainStr);
 return 0;
}
