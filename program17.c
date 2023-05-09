/*
Function Name:iteration
input: integer
output: 1-5
Description:Display 1-5 on screen
Author: Tanmayee K Deepak
Date:  26 April 2023
Language:C Programming
*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 5;

    printf("Frequency is:\n");
    Display(iValue);
    return 0;

}