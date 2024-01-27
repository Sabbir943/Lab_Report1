/*7. Write a C program that takes hours and minutes as input, and calculates the total number
of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int hours,minutes,totalminutes;
    printf("Enter hour:");
    scanf("%d",&hours);
    printf("Enter minutes:");
    scanf("%d",&minutes);
    totalminutes=(hours*60)+minutes;
    printf("Total minutes:%d\n",totalminutes);


}