//pallindrome
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iTemp = 0;
    int iDigit = 0;
    int iReverse = 0;
     iTemp = iNo;
    while(iNo!=0)
    {
     iDigit = iNo % 10;
     iReverse = (iReverse * 10) + iDigit;
     iNo = iNo/10;
    }
    if(iTemp == iReverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
    printf("%d is a pallindrome\n",iValue );
    }
    else
    {
        printf("%d is not a pallindrome \n", iValue);
    }
    return 0;

}