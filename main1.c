#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks>=40){
        printf("You Passed the exam!");
    }
    else{
        printf("You failed the exam!");
    }
return 0;
}