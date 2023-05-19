#include<stdio.h>

typedef unsigned long int ULONG;

 ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    ULONG iResult = 1;
    
    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }
    
    for(iCnt = 1; iCnt <= iPower ; iCnt++)
    {
        iResult = iResult*iBase;
  
    }
        return iResult;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
   ULONG iRet = 0;
    printf("Enter the base number:\n");
    scanf("%d",&iValue1);

    printf("Enter the power number:\n");
    scanf("%d",&iValue2);
    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is:%ld \n", iRet);
    
   
    return 0;

}