/* Experiment 5 - Arithmetic Calculator Using Switch */
#include <stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int a, b;
int op;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Enter case number ");
scanf(" %d", &op);
switch (op)
{
case 1:
  {
printf("Result = %d\n", a + b);
  }
break;
case 2:
  {
printf("Result = %d\n", a - b);
  }
break;
case 3:
  {
printf("Result = %d\n", a * b);
  }
break;
case 4:
if (b != 0)
{
printf("Result = %d\n", a / b);
}
else
printf("Division by zero is not allowed.\n");
break;
case 5:
if (b != 0)
{
printf("Result = %d\n", a % b);
}
else
printf("Division by zero is not allowed.\n");
break;
default:
printf("Invalid operator.\n");
}
  getch();
return 0;
}
