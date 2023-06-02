#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    float fDiff = 0.0f;
    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo/10;
    }
    return((float)iSum/(float)iCnt); //typecasting
   
}

int main()
{
    int iValue = 0;
    float fRet  = 0.0f;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    fRet = DigitsAverage(iValue);
    printf("Average of Digits is :%f\n", fRet);

    return 0;
}