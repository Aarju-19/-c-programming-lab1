#include <stdio.h>
void main ()
{
float L, A, P, B;
printf("enter the length of rectangle:");
scanf("%f", &L);
printf("enter the breadth of rectangle:");
scanf("%f", &B);
A = L*B;
printf("area of rectangle is: %f", A);
P = 2*(L+B);
printf(" perimeter of rectangle is: %f", P);

}
