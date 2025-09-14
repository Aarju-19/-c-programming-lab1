#include <stdio.h>
void main()
{
int i, girl=0, boy=0;
char n;
for(i=1; i<=10; i++){
printf("enter gender of student %d (M/F):", i);
scanf(" %c",&n);
if (n == 'F' ||n == 'f'){
girl++;
}
else if (n== 'M' || n == 'm'){
boy++;
}
else {printf("invalid entry!\n");
}
}
printf("The number of girls are : %d\n", girl);
printf("The number of boys are :%d\n", boy);
}
