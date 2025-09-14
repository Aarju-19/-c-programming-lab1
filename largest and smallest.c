#include <stdio.h>
void main()
{
int i, n, largest, smallest;
printf("Enter number 1:");
scanf("%d", &n);
largest = smallest = n;
for(i=2; i<=100; i++){
printf("Enter number %d:", i);
scanf("%d", &n);
if(n>largest){
largest= n;
}
if(n<smallest){
smallest = n;
}
}
printf("The smallest value is:%d\n", smallest);
printf("The largest value is:%d\n", largest);
}
