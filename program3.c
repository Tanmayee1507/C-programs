/*
Function name: Addition while user gives the input
Author: Tanmayee Kadam
Date:18th April 2023
language :C programming
*/
#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

printf("Enter first number:\n",No1);
scanf("%d",&No1);
printf("Enter second number:\n",No2);
scanf("%d",&No2);
    Ans = No1 + No2;

    printf("Addition is:%d\n",Ans);

    return 0;
}