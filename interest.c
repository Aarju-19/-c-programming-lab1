#include <stdio.h>
void main()
{
float interest, principal, rate, time;
printf("Enter the principal amount:");
scanf("%f", &principal);
printf("Enter the rate of interest:");
scanf("%f", &rate);
printf("Enter the time period:");
scanf("%f", &time);
interest = (principal * rate * time)/100;
printf("The interest is : %f", interest);
}
