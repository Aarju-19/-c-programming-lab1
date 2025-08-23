#include <stdio.h>
void main()
{
float a, b, c, d;
printf("enter value in Bytes:");
scanf("%f", a);
b = a/1000.00;
printf("value in KB: %f/n", b);
c = a/1000000.00;
printf("value in MB:%f/n", c);
d= a/1000000000.00;
printf("value in GB: %f/n", d);

}
