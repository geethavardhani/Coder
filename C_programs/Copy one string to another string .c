#include<stdio.h>
#include<string.h>
int main()
{
char subject1[] = {"PPS"};
char subject2[] = {"Maths"};
strcpy(subject2, subject1);
printf( "%s\n", subject2);
printf( "%s\n", subject1);
    return 0;
}
