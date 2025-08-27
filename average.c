#include <stdio.h>
void main ()
{
float maths, physics, chemistry, average, total;
printf("Enter marks in maths:");
scanf("%f", &maths);
printf("Enter marks in physics:");
scanf("%f\n", &physics);
printf("Enter marks in chemistry:");
scanf("%f\n", &chemistry);
average = (maths+ physics+ chemistry)/3;
total = maths + physics + chemistry;
printf("Average marks are : %f\n", average);
printf("Total marks are : %f\n", total);
}
