#include <stdio.h>
void main()
{
int i, n, positive=0, negative=0, zero;
for(i=1; i<=200; i++){
printf("Enter number %d:", i);
scanf("%d", &n);
if(n > 0){
positive++;
}
else if(n< 0){
negative++;
}
else {
zero++;
}
}
printf("Total positive values are : %d\n", positive);
printf("Total negative values are :%d\n", negative);
printf("The total zeroes are: %d\n", zero);
}
