/*
Function Name:Problems on numbers
output: 
Description: Display factors of the number
Author: Tanmayee K Deepak
Date:2 May 2023
Language:C Programming
*/
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {

        printf("%d \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter thr value:\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}