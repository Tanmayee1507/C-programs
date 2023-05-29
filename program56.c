#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    while(iNo!=0 )
    {
     iDigit = iNo%10;
     printf("%d\n",iDigit);
    
     if(iDigit==8)
     {
        break;
     }
     iNo = iNo/10;
     
    }
    return bFlag;
   
}

int main()
{
    int iValue = 0;
    bool bRet= false;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    bRet = CheckDigit(iValue);
    if(bRet== true)
    {
        printf("Digit 8 is present\n");
    }
    else{
        printf("Digit 8 is not present\n");
    }
    return 0;

}