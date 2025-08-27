#include <stdio.h>
void main ()
{
int a, b, temp;
printf("enter 2 numbers:");
scanf("%d %d", &a, &b);
temp = a;
a = b;
b = temp;
printf("swapped values: a = %d, b = %d", a, b);
}
