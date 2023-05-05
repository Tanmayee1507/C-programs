/*
Function Name:Iteration()
input: integer
output: Jay ganesh
Description: Display Jay Ganesh 
Author: Tanmayee K Deepak
Date:  26 April 2023
Language:C Programming
*/

#include<stdio.h>

void ForLoop(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of times to print the string:\n");
    scanf("%d",&iValue);
    ForLoop(iValue);
    return 0;
}