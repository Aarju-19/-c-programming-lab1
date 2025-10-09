#include <stdio.h>
void main()
{
int i, j, p, q, m, n, k;
printf("Enter the number of rows in matrix A:");
scanf("%d", &p);
printf("Enter the number of columns in matrix A:");
scanf("%d", &q);
printf("A: %d X %d\n", p, q);
printf("Enter the number of rows in matrix B:");
scanf("%d", &m);
printf("Enter the number of columns in matrix B:");
scanf("%d", &n);
printf("B : %d X %d\n", m, n);
int a[p][q], b[m][n], c[p][n];
if(q==m){
    printf("Enter the elements for A matrix:");
for( i =0; i<p; i++){
    for (j=0; j<q; j++){
scanf("%d", &a[i][j]);
}
}
printf("Enter the elements for B matrix:");
for( i=0; i<m; i++){
    for (j=0; j<n; j++){
scanf("%d", &b[i][j]);
}
}
for(i=0; i<p; i++){
    for(j=0; j<n; j++){
        c[i][j]= 0;
    }
}
 for(i=0; i<p; i++) {
        for(j=0; j<n; j++) {
            for(k=0; k<q; k++) {
                c[i][j] += a[i][k] * b[k][j];
}
}
}
printf("The matrix multiplication A X B is:\n");
for(i=0; i<p; i++){
    for(j=0; j<n; j++){
        printf("%d\t", c[i][j]);
    }
   printf("\n");
}
}
else { printf("Matrix multiplication is not possible.");
}
}
