#include <stdio.h>
void main()
{
    int a[10], i, j, n, temp;
    printf("Enter the value of n:");
     scanf("%d", &n);
     printf("Enter the elements of array A: ");
     for(i=0; i<10; i++){
        scanf("%d",&a[i]);
     }
     for(j=0; j<n; j++) {
        temp = a[9];
        for(i=10; i>0; i--) {
            a[i] = a[i-1];
        }
        a[0] = temp;
    }
    printf("Array after right shift: ");
    for(i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    }
