#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
char str1[100], str2[100];
int result;
printf("Enter 1st string:");
gets(str1);
printf("Enter 2nd string:");
gets(str2);
result = strcmp(str1, str2);
if(result >0)
    {
        printf("String 1 is greater than 2");
}
else if(result<0){
    printf("String 1 is lower than 2");
    }
else{ printf("Both strings are equal");
}
}
