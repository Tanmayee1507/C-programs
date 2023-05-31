#include<stdio.h>
#include<stdbool.h>

int CheckDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;
    if((iSearch<0)||(iSearch>9))
    {
        printf("Please enter the digit in range 0 to 9\n");
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0 )
    {
     iDigit = iNo % 10;
    
     if(iDigit == iSearch)
     {
        iCnt++;
     }
     iNo = iNo/10;
     
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet= 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue1);
    printf("Enter the Digit to check:\n");
    scanf("%d",&iValue2);
    iRet = CheckDigit(iValue1, iValue2);
    
        printf("%d is presentin %d\n for %d times", iValue2,iValue1, iRet);
   
    return 0;

}