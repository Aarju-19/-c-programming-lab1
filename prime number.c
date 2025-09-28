#include<stdio.h>
void main()
{
    int x,y=0;
    printf("Enter any number:");
    scanf("%d",&x);
    if(x>1)
    {

    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            y=1;
            break;
        }
    }
    if(y==1)
    {
        printf("%d is not prime",x);
    }
    else if(y==0)
    {
        printf("%d is prime",x);
    }
    }
    else
    {
        printf("%d is not prime",x);
    }


}
