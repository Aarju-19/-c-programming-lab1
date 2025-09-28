#include <stdio.h>
void main()
{
int i, a[10];
for(i=0; i<10; i++){
printf("Enter %d value:", i+1);
scanf("%d",&a[i]);
}
printf("%d , %d", a[3], a[8]);
}
