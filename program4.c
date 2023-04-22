/*
Function Name:Addition
input: unsigned integer, unsigned integer
output: unsigned integer
Description: addition of 2 numbers
Author: Tanmayee Kadam
Date: 18 April 2023
Language:C Programming
*/
#include<stdio.h>

unsigned int Addition(unsigned int Value1, unsigned int Value2)
{
    unsigned int iResult = 0;

    iResult = Value1 + Value2;

    return iResult;
}

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number:\n",iNo1);
    scanf("%d",&iNo1);

    printf("Enter second number:\n",iNo2);
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is:%d\n",iAns);

    return 0;
    
}

