#include <stdio.h>
void main()
{
int i, n, a[9] = {500, 200, 100, 50,20, 10, 5, 2, 1}, count[]= {0};
printf("Enter any value:");
scanf("%d", &n);
printf("Number of notes required;\n");
for(i= 0; i<9; i++){
count[i]= n/ a[i];
if(count!=0){
    printf("The number of %d notes required is : %d\n", a[i], count[i]);
    n = n % a[i];
}
}

}
