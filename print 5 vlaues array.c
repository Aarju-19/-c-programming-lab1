#include <stdio.h>
void main()
{
int i;
int a[5];
for(i=0; i<5; i++){
printf("Enter %d value", i+1);
scanf("%d", &a[i]);
}
printf("The 5 values are:");
for(i=0; i<5; i++){
printf("%d", a[i]);
}
}
