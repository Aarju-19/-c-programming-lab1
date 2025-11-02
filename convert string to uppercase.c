#include <stdio.h>
#include <string.h>
void main()
{
    char s[]= "slim shady";
    printf("The string is : %s\n", s);
    strupr(s);
    printf("The string in uppercase is: %s\n", strupr(s));
}
