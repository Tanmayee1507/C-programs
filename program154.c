#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
        if((cValue>='A')&&( cValue<='Z'))
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
    char ch = '\0';
    bool bRet = false;
    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("It is a Capital Character\n");
    }
    else
    {
        printf("it is not a Capital character\n");

    }
    return 0;
}