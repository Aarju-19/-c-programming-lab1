#include <stdio.h>
void main()
{
float netSalary, allowance, deduction, grossSalary;
printf("enter the gross salary;");
scanf("%f", &grossSalary);
deduction = grossSalary*0.03;
allowance = grossSalary/10;
netSalary = grossSalary + allowance - deduction;
printf("deduction is :%f\n ", deduction );
printf("allowance is :%f\n ", allowance);
printf("net salary : %f\n", netSalary);

}
