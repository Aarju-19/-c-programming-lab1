#include <stdio.h>
void main()
{
int n, digit=0, square, original, power=1, temp;
printf("Enter any number:");
scanf("%d", &n);
original = n;
temp = original;
square = n*n;
while (temp>0){
digit++;
temp = temp/10;
}
for (int i = 0; i<digit; i++) {
        power *= 10;
}
if (square % power == original){
    printf("Entered number %d is an automorphic number.\n", original);
}
else { printf("Entered number %d is not an automorphic number.\n", original);
}
}
