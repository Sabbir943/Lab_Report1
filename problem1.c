/*1. Write a C program to print your name, date of birth, and mobile number.
Expected Output:
Name : Alexandra Abramov
DOB : July 14, 1975
Mobile : 99-9999999999*/
#include<stdio.h>
int main()
{
    char name[50]="Alexandra Abramov";
    char DOB[50]="July 14, 1975";
    
    
    char Mobile[50]=" 99-9999999999";
    printf("Name :%s\n",name);
    printf("DOB :%s\n",DOB);
    printf("Mobile :%s\n",Mobile);
}