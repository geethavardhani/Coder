#include<stdio.h>
#include<string.h>
int main()
{
    char a[]={"Welcome to"};
    char b[]={" C programming Lab"};
    strcat(a, b);
    printf("Concatenated string: %s", a);
    return 0;
}



