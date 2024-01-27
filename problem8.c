/*Write a C program to perform addition, subtraction, multiplication and division of two
numbers.
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000
*/
#include<stdio.h>
#include<math.h>
int main()
{
int num1,num2,sum,sub,multi;
float div;
printf("Enter two number:");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
sub=num1-num2;
multi=num1*num2;
div=(float)num1/num2;
printf("The sum of the given numbers :%d\n",sum);
printf("The difference of the given numbers :%d\n",sub);
printf("The product of the given numbers :%d\n",multi);
printf("The quotient of the given numbers :%f\n",div);




}