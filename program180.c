//replace small letters by capital letters
#include<stdio.h>
void StruprX(char *str)
{
    while(*str!='\0')
    {
         if((*str>='a')&&(*str<='z'))
        {
            *str =*str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    StruprX(Arr);

    printf("String after editing is: %s\n", Arr);

    return 0;
}

