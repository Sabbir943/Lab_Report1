/*5. Write a program that converts Centigrade to Fahrenheit.
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.*/
#include<stdio.h>
#include<math.h>
int main()
{
    //f=(c*1.8)+32
    //c=(f-32)/1.8
    float centigrade;
    printf("Enter centrigrade:");
    scanf("%f",&centigrade);
    float temperature,Fahrenheit;
    temperature=(centigrade*1.8)+32;
    printf("Fahrenheit:%f\n",temperature);

}