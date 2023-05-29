#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit = 0;

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
    if(iNo != 0)
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