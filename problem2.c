/*2. Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include<stdio.h>
#include<math.h>
int main()
{
    //input radious from user.
    float radious,pi;
    pi=3.1416;
    //scanning radious
    printf("Enter radious:");
    scanf("%f",&radious);
    printf("Perimeter of the Circle = %f\n",2*pi*radious);
    printf("Area  of the Circle = %f\n",pi*radious*radious);
}
