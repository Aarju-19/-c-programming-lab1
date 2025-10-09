#include <stdio.h>
void main()
{
int a[3][3], i, j, b[3][3], c[3][3];
printf("Enter the elements for 3X3 matrix:");
for( i =0; i<3; i++){
for (j=0; j<3; j++){
scanf("%d", &a[i][j]);
}
}
printf("You entered \n:");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
}
printf("Enter the elements for 3X3 matrix:");
for( i=0; i<3; i++){
for (j=0; j<3; j++){
scanf("%d", &b[i][j]);
}
}
printf("You entered \n:");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d", b[i][j]);
    }
    printf("\n");
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        c[i][j]= a[i][j] - b[i][j];
    }
}
printf("The sum if two 3X3 matrices is:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d", c[i][j]);
    }
printf("\n");
}
}
