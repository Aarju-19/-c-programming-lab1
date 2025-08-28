#include <stdio.h>
void main()
{
int i, sum, n;
printf("Enter the value of n:");
scanf("%d", &n);
for(i = 2; i<=n; i+=2){
sum +=i;}
printf("the sum of n natural numbers is %d\n", sum);
}
