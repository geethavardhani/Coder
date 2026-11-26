#include <stdio.h>
union Value
{
int i;
float f;
char ch;
};
void show(union Value v)
{
printf(" i = %d, f = %f ch = %-3d \n",v.i, v.f, v.ch, (unsigned)v.i);
}
int main(void)
{
union Value v;
v.i = 65;
printf("After v.i = 65:\n");
show(v);
v.f = 3.5f;
printf("After v.f = 3.5:\n");
show(v);
v.ch = 'Z';
printf("After v.ch = 'Z':\n");
show(v);
return 0;
}
