#include <stdio.h>
void main()
{
int n, i;
printf("Enter the number of elements in A:\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array A:\n");
for(i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
        n++;
        printf("Array after deletion is: ");
        for(i=1; i<n-1; i++)
        {
            printf("%d\t", a[i]);
        }

}
