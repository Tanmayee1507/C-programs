#include<stdio.h>

int SmallestDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;
    
    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo/10;
    }
    return iMin;
   
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = SmallestDigit(iValue);
    printf("Smallest of Digits is :%d\n", iRet);

    return 0;
}