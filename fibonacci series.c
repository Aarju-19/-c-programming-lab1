#include <stdio.h>
void main()
{
int i, n, a1= 1, a2= 1, t;
printf("Enter the value of n:");
scanf("%d", &n);
printf("The fibonaci series is: ");
for(i=1; i<=n; i++){
   printf("%d, ", a1);
   t = a1 + a2;
   a1 = a2;
   a2 = t;
}
}
