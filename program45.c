#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    iCnt= 1;
    while(iCnt<= iNo)
    {
        iAns=iCnt*iAns;
        iCnt++;
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