#include <stdio.h>
void main()
{
int n, cube, digit, sum=0, original;
printf("Enter any number:");
scanf("%d", &n);
original = n;
while (n>0){
digit = n%10;
printf("%d\n", digit);
cube = digit*digit*digit;
sum = sum+cube;
n = n/10;
}
if(sum == original){
    printf("Entered number is an armstrong number.\n");
}
else { printf("Entered number is not an armstrong number.\n");
}
}
