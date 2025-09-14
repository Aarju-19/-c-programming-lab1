#include <stdio.h>
void main()
{
    int i, sum=0;
printf("the numbers divisible by 3 are:");
for(i=1; i<=100; i++){
    if(i%3 == 0){
        sum = sum+i;
        printf("%d\n", i);

    }
}
printf("the sum is:%d", sum);
}
