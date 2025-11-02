#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char str[10], a[10];
    printf("Enter a string: ");
    gets(str);
    strcpy(a, str);
    printf("copied string a is : %s\n", a);
}
