#include <stdio.h>
void main ()
{
float grossSales, discount, netSales;
printf("Enter the value of gross sales:");
scanf("%f", &grossSales);
discount = grossSales/10;
netSales = grossSales - discount;
printf("gross sales is: %f", grossSales);
printf("net sales is : %f", netSales);

}
