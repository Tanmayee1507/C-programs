//accept  number from user & perform addition of factors of that numbers
/*
Function Name:Problems on numbers
output: 
Description: Display factors of the number
Author: Tanmayee K Deepak
Date:2 May 2023
Language:C Programming
*/
#include<stdio.h>

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

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors is:%d",iRet);
    return 0;
}