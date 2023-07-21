//replace small letters by capital letters
#include<stdio.h>
void StrToggleX(char *str)
{
    int Gap = 'a'-'A';
    while(*str!='\0')
    {
         if((*str>='a')&&(*str<='z'))
        {
            *str =*str - Gap;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    StrToggleX(Arr);

    printf("String after editing is: %s\n", Arr);

    return 0;
}

