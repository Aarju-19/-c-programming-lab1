#include <stdio.h>
void main()
{
int n, i;
printf("Enter the number of elements in A:\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array A:\n");
for(i=0; i<n; i++){
    scanf("%d", &a[i]);
}
int k;
printf("Enter the new element to be added at the beginning:");
    scanf("%d", &k);
     for(i=n; i>0; i--)
        {
        a[i]=a[i-1];
     }
        a[0] = k;
        n++;
        printf("Array after insertion is: ");
        for(i=0; i<n; i++){
            printf("%d\t", a[i]);
        }

}
