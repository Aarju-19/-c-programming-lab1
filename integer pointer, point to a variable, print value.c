#include <stdio.h>
void main ()
{
int n= 5;
int *ptr;
ptr =&n;
printf("value of n = %d \n", n);
printf("The address of n = %d\n", &n);
printf("The address of pointer = %d\n", ptr);
printf("The value pointed = %d \n", *ptr);
}
