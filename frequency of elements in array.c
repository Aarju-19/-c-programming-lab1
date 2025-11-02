#include <stdio.h>
void main()
{
int a[10], i, count[10] = {0};
printf("Enter the elements of array A: ");
for(i=0; i<10; i++){
    scanf("%d",&a[i]);
}
for(i=0; i<10; i++){
    count[a[i]]++;
}
for(i=0; i<10; i++) {
        if(count[i] > 0){
            printf("The element %d occurs %d times. \n", i, count[i]);
    }
}
}
