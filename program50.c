//accept no from user and count digits
#include<stdio.h>
int CountDigits(int iNo)
{
    
    int iDigit = 0;
    int iSum = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    iRet = CountDigits(iValue);
    printf("Sum of Digits is:%d\n",iRet);
    return 0;

}