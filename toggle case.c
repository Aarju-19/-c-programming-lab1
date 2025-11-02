#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[100];
    int i;
    printf("Enter a string: ");
    gets(s);
    for(i=0; s[i]!= '\0';i++)
        {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] = s[i] - 32;
        }
        else if(s[i]>= 'A' && s[i]<='Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("Toggled string is: %s ", s);
}
