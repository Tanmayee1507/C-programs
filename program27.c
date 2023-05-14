//accept  number from user & check if the number is a perfect number 
/*
Function Name:Problems on numbers
output: 
Description: Display perfect number
Author: Tanmayee K Deepak
Date:2 May 2023
Language:C Programming
*/
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt ++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
            printf("%d \n",iCnt);
        }
    }
    return iSum;
}

bool CheckPerfect(int iNumber)
{
    int iResult = 0;
    iResult = SumFactors(iNumber);
    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    bool bRet = false;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is a perfect number \n ",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n", iValue);
    }
    
    return 0;
}