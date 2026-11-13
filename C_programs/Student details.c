#include<stdio.h>
#include<string.h>

struct student
{
int rollno;
int marks;
char name[20];
};
int main()
{
    struct student Geetha;
    Geetha.rollno=39;
    Geetha.marks=80;
    strcpy(Geetha.name,"Geetha");
printf("%d %d %s",Geetha.rollno,Geetha.marks,Geetha.name);
return 0;
}

