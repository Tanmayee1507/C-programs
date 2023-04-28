/*
Function Name:divisibility
input: signed integer
output: Boolean
Description:check if the number is divisible by 3 and 5
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
        return iNo;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the numbe to check if it is divisible by 3 and 5:\n");
    scanf("%d", &iValue);

    bRet = CheckDivisibility(iValue);

    if(bRet == true)
    {
        printf("%d is divisble by 3 & 5\n", iValue);
    }

    else
    {
        printf("%d is not divisible by 3 & 5\n", iValue);
    }

    return 0;
}