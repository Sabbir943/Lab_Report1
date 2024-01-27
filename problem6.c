/*6. Write a C program that converts kilometers per hour to miles per hour.
Expected Output :

Input kilometers per hour: 15
9.320568 miles per hour*/
#include<stdio.h>
#include<math.h>
int main()
{
    //1km=0.621371
    float km,miles,hour;
printf("Enter Kilometers per hour:");
scanf("%f",&hour);
    
    miles=0.621371*hour;
    printf("Miles per hour:%f\n",miles);
}