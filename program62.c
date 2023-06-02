#include<stdio.h>
#include<stdbool.h>

int CheckDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0 )
    {
     iDigit = iNo % 10;
    
     if((iDigit%2)!=0)
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
    
    int iRet= 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue1);
    
    iRet = CheckDigit(iValue1);
    
        printf("frequecy of odd digits present in %d are:%d\n ", iValue1, iRet);
   
    return 0;

}