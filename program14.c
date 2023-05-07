/*
Function Name:iteration using Updater
input: integer
output: Jay ganesh
Description: Display Jay Ganesh 
Author: Tanmayee K Deepak
Date:  26 April 2023
Language:C Programming
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)  //updater
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("Jay Ganesh... \n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter th number of times to Display string:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}