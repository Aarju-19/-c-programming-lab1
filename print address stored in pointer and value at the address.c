#include <stdio.h>
void main()
{
int n= 19;
int *ptr;
ptr = &n;
printf("The value of n is: %d\n", n);
printf("The address of n is :%u\n", &n);
printf("Address stored in pointer is : %u\n", ptr);
printf("The value at that address is: %d\n", *ptr);
}
