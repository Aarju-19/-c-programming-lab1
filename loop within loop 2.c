#include <stdio.h>
void main()
{
int i, j;
for(j= 1; j<=3; j++){
    for(i=1; i<=j; i++){
        printf("%d %d\n", j, i);
    }
}
}
