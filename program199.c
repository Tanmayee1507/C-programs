//compare 2 strings and check if they are same or not 
//str1 DeMo
//str2 dEMo
#include<stdio.h>
#include<stdbool.h>
bool strcmpX(char *str1, char * str2)
{
    while((*str1 !='\0')&&(*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
   
            if((*str1>='a')&&(*str1<='z'))
            {
                if(*str1 != (*str2 +32))
                {
                    break;
                }
            }
            else if((*str1>='A')&&(*str1<='Z'))
            {
                if(*str1 != (*str2 -32))
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    
    str1++;
    str2++;
    }

    if((*str1 =='\0')&&(*str2 =='\0'))
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;
    printf("Enter the first string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    else
    {
        printf("Both the strings are different\n");
    }
    return 0;
}
