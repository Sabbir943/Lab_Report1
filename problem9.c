/*9.  Write a C program to find the third angle of a triangle if two angles are given.
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60*/
#include<stdio.h>
#include<math.h>
int main()
{
    float angle1,angle2,angle3;
    printf("Enter angle1:");
    scanf("%f",&angle1);
    printf("Enter angle2:");
    scanf("%f",&angle2);
    angle3=180-(angle1+angle2);
    printf("Third angle of the triangle :%.2f\n",angle3);
}
