/*
Function Name:even odd
input: unsigned integer
output: even/odd
Description: check whether the number is even or  odd
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/

#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    if((iNo%2) == 0)
    {
        printf("%d is even number \n",iNo);

    }

    else
    {
        printf("%d is odd number \n",iNo);
    }

    return iNo;
}

int main()
{
    int iValue = 0;

    printf("Enter th number:");
    scanf("%d",&iValue);
    int iRet = 0;
    iRet = CheckEvenOdd(iValue);
    
}

