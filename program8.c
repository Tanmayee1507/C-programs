/*
Function Name:display result
input: unsigned integer
output: 
Description: write a program to accept marks and display the class accordingly
0-34=fail
35-49= pass class
50-59= second class
60-74=first class
74- 100 = first class with distinction
Author: Tanmayee K Deepak
Date:  25 April 2023
Language:C Programming
*/

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))    //Filter
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the range 0 to 100");
        return;
    }
    
    if((fMarks >= 0.0f)&&(fMarks < 35.00f))
    {
        printf("You are fail\n");
    }

    else if((fMarks >= 35.0f)&&(fMarks < 50.00f))
    {
        printf("You got pass class\n");
    }
        else if((fMarks >= 50.0f)&&(fMarks < 60.00f))
    {
        printf("You got second class\n");
    }
        else if((fMarks >= 60.0f)&&(fMarks < 75.00f))
    {
        printf("You got first class\n");
    }
        else if((fMarks >= 75.0f)&&(fMarks <=100.00f))
    {
        printf("You got first class with distinction\n");
    }
}

int main()
{
    float fValue = 0;
    printf("Please enter your marks:\n");
    scanf("%f", &fValue);

    DisplayClass(fValue);
    return 0;
}