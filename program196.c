//compare 2 strings and check if they are same or not 
//time complexity is X where x is position of first mismatched character
#include<stdio.h>
#include<stdbool.h>
bool strcmpX(char *str1, char * str2)
{
    while((*str1 !='\0')&&(*str2 != '\0')&&(*str1 == *str2))
    {
    str1++;
    str2++;
    }
    
return (*str1=='\0')&&(*str2=='\0');// result return kara
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
