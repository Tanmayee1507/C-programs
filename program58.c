#include<stdio.h>
#include<stdbool.h>

int CheckFreq(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0 )
    {
     iDigit = iNo%10;
     if(iDigit==8)
     {
        iCnt++;
     }
     iNo = iNo/10;
     
    }
    return iCnt;
   
}

int main()
{
    int iValue = 0;
    int iRet= 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    iRet = CheckFreq(iValue);

        printf("Digit 8 is present:%d\n",iRet);
    
    return 0;

}