#include <stdio.h>
void main()
{
    int n, i, sum=0;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("The factors of %d are :\n", n);
    for(i=1; i<=n/2; i++){
        if(n%i==0){

            printf("%d\n", i);
            sum = sum+i;
        }
    }
    if(sum == n)
    {
        printf("Entered number %d is a perfect number.", n);
    }
    else {
            printf("Entered number %d is not a perfect number.", n);
    }
}
