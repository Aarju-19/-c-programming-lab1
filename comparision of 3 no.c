#include <stdio.h>
void main()
{
int a, b, c;
printf("enter 3 numbers:");
scanf("%d %d %d", &a, &b, &c);
if ( a > b && a>c)
 {
printf("a is the largest");
}
else if ( b>a && b>c){
printf("b is the largest");
}
else {
printf("c is the largest:");
}
if (a<b && a<c)
{
printf("a is the smallest");
}
else if (b<a && b<c)
{
printf("b is the smallest");
}
else { printf("c is the smallest");
}

}
