/*
Function Name:even odd
input: signed integer
output: Boolean
Description: check whether the number is even or  odd
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo%2) == 0)
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
    int iValue = 0; // variable to accept input
    bool bRet = false; // variable to accept value

    printf("Enter th number to check if the number is even or odd:");
    scanf("%d",&iValue);
    
    bRet = CheckEvenOdd(iValue);// function call

    if(bRet == true)
    {
        printf("%d is even number \n",iValue);

    }

    else
    {
        printf("%d is odd number \n",iValue);
    }

}
    


