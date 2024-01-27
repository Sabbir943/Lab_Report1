/*10. Write a C program that calculates the volume of a sphere.
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float rad,volume,pi;
    printf("Enter radiuos:");
    scanf("%f",&rad);
    pi=3.1416;
    //formula=4*pi*rad*rad*rad)/3
    volume=(4*pi*rad*rad*rad)/3;
    printf("The volume of sphere is:%.2f\n",volume);
}
