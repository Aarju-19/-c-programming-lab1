#include <stdio.h>
void main()
{
int a[4][4], i, j;
printf("Enter the elements for 4X4 matrix:");
for( i =0; i<4; i++)
    {
for (j=0; j<4; j++)
{
scanf("%d", &a[i][j]);
}
}
printf("You entered \n:");
for(i=0; i<4; i++)
{
    for(j=0; j<4; j++)
    {
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}
printf("The transpose of matrix A is: \n");
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("%d\t", a[j][i]);
    }
    printf("\n");
}
}
