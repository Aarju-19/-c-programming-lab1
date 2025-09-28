#include <stdio.h>
void main()
{
int n, sum=0, digit;
printf("Enter any number:");
scanf("%d", &n);
printf("The digits of the number are:");
while (n>0){
digit = n%10;
printf("%d\n", digit);
n = n/10;
sum = sum+digit;
}
printf("The sum of digits is: %d", sum);
}
