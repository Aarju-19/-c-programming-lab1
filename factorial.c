#include <stdio.h>
void main()
{
int i, n, factorial=1;
printf("Enter the number:");
scanf("%d",&n);
for (i = 2; i<=n; i++)
{
factorial= factorial*i;
}

printf("Factorial is = %d", factorial);
}
