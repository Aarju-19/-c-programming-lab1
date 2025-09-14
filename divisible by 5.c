#include <stdio.h>
void main()
{
int i;
printf("the numbers divisible by 5 are:");
for(i=1; i<=100; i++){
    if(i%5 == 0){
        printf("%d\n", i);

    }
}
}
