#include <stdio.h>
void main()
{
int n, digit, count=0;
printf("Enter any number:");
scanf("%d", &n);
printf("The digits of the number are:");
while (n>0){
digit = n%10;
printf("%d\n", digit);
n = n/10;
count++;
}
printf("the number of digits :%d", count);
}
