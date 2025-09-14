#include <stdio.h>
void main()
{
int n, rev=0, counter=0, remainder, original;
printf("Enter a number:");
scanf("%d", &n);
original = n;
while ( n!=0){
remainder = n%10;
rev = rev*10 + remainder;
counter = counter +1;
n = n/10;
printf("After the %dth iteration, the number is %d and the reverse is %d\n", counter, n, rev);
 }
 if (original==rev)
 printf("The entered number is a palindrome");
 else
 printf("The entered number is not a palindrome");
}
