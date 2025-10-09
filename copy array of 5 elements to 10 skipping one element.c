#include <stdio.h>
void main()
{
int a[5] = {1, 2, 3, 4, 5}, b[10], i=0, j=0;
for(i=0; i<10; i++){
        if(i % 2 != 0){
           b[i] = a[j];
           j++;
           }
           else { b[i] = 0;
           }
        }
    for(i=0; i<10; i++){
    printf("%d\t", b[i]);
    }
}
