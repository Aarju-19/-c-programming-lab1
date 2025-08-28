#include <stdio.h>
void main()
{
int i, n, mean, sum, x;
sum=0;
printf("Enter the value of x:");
scanf("%d", &x);
for(i= 1; i<=x; i++)
{
printf("Enter the value of n:");
scanf("%d", &n);
sum=sum+n;
}

printf("the sum of 10 values is:%d\n", sum);
mean = sum/x;
printf("The mean is : %d\n", mean);
}
