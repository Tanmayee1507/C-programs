
#include<stdio.h>
#define ERR_NOTFOUND -1
//frequency of small and capital letters
void Freq(char *str)
{
    int iCnt1 = 0;
    int iCnt2 =0;
    while((*str != '\0'))
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt1++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            iCnt2++;
        }
        str++;
    }
    printf("Capital Characters are %d\n", iCnt2);
    printf("Small letters are:%d\n", iCnt1);
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);//callbyaddress

   
    Freq(Arr);//callbyvalue
    
    return 0;
}