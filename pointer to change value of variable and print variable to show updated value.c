#include <stdio.h>
void main()
{
int n=19;
int *ptr;
ptr = &n;
printf("Value of n: %d\n", n);
printf("The address of n: %u\n", &n);
printf("The pointer = %u\n", ptr);
printf("Value at pointer = %d\n", *ptr);
*ptr = 91;
printf("the changed value is:\n");
printf("the vlaue of n : %d\n", n);
printf("The value of pointer: %d\n", *ptr);
}
