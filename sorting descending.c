#include <stdio.h>
void main()
{
int i, j, temp, n=5;
int a[5];
printf("Enter 5 numbers:");
for(i=0; i<5; i++)
{
scanf("%d", &a[i]);
}

for (j=0; j<n-1; j++){
for (i=0; i<n-j-1; i++){
if (a[i]< a[i+1]){
temp = a[i];
a[i]= a[i+1];
a[i+1]= temp;
}
}
}
printf("the numbers in descending order are: ");
for(i=0; i<5; i++){
printf("%d\t", a[i]);
}
}
