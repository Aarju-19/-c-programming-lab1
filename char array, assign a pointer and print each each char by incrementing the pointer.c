#include <stdio.h>
void main()
{
    int i;
    char str[5];
    char *ptr;
    ptr = str;
    printf("Enter the elements of array:");
    for(i=0; i<5; i++){
        scanf("%c", &str[i]);
    }
    printf("The characters in array are:");
    for(i=0; i<5; i++){
        printf("%c\t", *ptr);
        ptr++;
    }
}
