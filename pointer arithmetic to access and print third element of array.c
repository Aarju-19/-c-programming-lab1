#include <stdio.h>
void main()
{
  int a[5]= {1, 2, 3, 4, 5};
  int *ptr;
  ptr = a;
  printf("The third element of array is: %d", *(ptr+2));
}
