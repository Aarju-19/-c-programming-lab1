#include <stdio.h>
void main()
{
int maths, physics, chemistry, average, total;
printf("Enter the marks in maths:");
scanf("%d", &maths);
printf("Enter the marks in physics:");
scanf("%d", &physics);
printf("Enter the marks in chemistry:");
scanf("%d", &chemistry);
total = maths + physics + chemistry;
printf("The total marks are : %d", total);
average = (maths + physics + chemistry)/3;
if (average >= 75){
printf("Your grade is distinction");
}
else if (average >= 60){
printf("Your grade is first class");
}
else if (average >= 50){
printf("Your grade is second class");
}
else if (average >= 35){
printf("Your grade is third class");
}
else {printf("You have failed");
}
}
