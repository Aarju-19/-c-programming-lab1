#include <stdio.h>
void main()
{
float netSalary, grossSalary, allowances, deduction;
printf("Enter the gross salary:");
scanf("%f", &grossSalary);
if(grossSalary > 10000)
{
allowances = grossSalary/10;
deduction = grossSalary* 0.03;
netSalary = grossSalary + allowances - deduction;
printf("net salary is : %f", netSalary);
}
 else if (grossSalary >5000)
{
allowances = grossSalary* 0.07;
deduction = grossSalary* 0.02;
netSalary = grossSalary + allowances - deduction;
printf("net salary is : %f", netSalary);
}

}
