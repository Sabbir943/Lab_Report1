/*3. Write a C program that accepts an employee&#39;s ID, total worked hours in a month and the
amount he received per hour. Print the ID and salary (with two decimal places) of the
employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00*/
#include<stdio.h>
#include<math.h>
int main()
{
    char id[10];
    printf("Enter id:");
    scanf("%s",&id);
    int hrs;
    printf("Enter hrs:");
    scanf("%d",&hrs);
    int amountperhrs;
    printf("Enter amountperhrs:");
    scanf("%d",&amountperhrs);
    int  salary=hrs*amountperhrs;
    printf("Employees ID =%d\n",id);
    printf("Salary = U$ %d\n",salary);
}


