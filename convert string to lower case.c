#include <stdio.h>
#include <string.h>
void main()
{
char str[10];
printf("Enter a string:");
scanf("%s",str);
int len = strlen(str);
printf("The length of the string is: %d", len);
}
