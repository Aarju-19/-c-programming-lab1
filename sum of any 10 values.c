#include <stdio.h>
void main()
{
int i, n, mean, sum;
sum=0;
for(i= 1; i<=10; i++)
{
printf("Enter the value of n:");
scanf("%d", &n);
sum=sum+n;
}

printf("the sum of 10 values is:%d\n", sum);
mean = sum/10;
printf("The mean is : %d\n", mean);
}
