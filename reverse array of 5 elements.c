#include <stdio.h>
void main()
{
int a[5], i=0, b[5], temp;
printf("Enter the elements of array A:");
for(i=0; i<5; i++){
    scanf("%d", &a[i]);
}
for (i=0; i<5/2; i++){
    temp= a[i];
    a[i] = a[4-i];
    a[4-i]= temp;
}
printf("Reverse of array A is: ");
for(i=0; i<5; i++){
    printf("%d\t", a[i]);
}
}
