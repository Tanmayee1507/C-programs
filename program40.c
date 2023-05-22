#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    for(iCnt=iNo; iCnt>= 1; iCnt--)
    {
        iAns=iCnt*iAns;
    }
    return iAns;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter the value:\n");
scanf("%d", &iValue);

iRet = Factorial(iValue);
printf("Result is:%d\n",iRet);
return 0;
}