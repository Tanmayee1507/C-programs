//return first occurenceof string
#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOcc(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);//callbyaddress

    printf("Enter the character:\n");
    scanf(" %c",&ch);

    iRet = FirstOcc(Arr, ch);//callbyvalue
    if(iRet ==ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
    printf("FIrst occurence of that character is at: %d\n",iRet);
    }
    return 0;
}