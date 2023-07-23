//copy string from
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrcpytoggleX(char *src, char *dest)
{
    
    while(*src!='\0')
    {
        if((*src>='A')&& (*src<='Z'))
        {
        *dest = *src+32;
         
        }
        else if((*src>='a')&& (*src<='z'))
        {
        *dest = *src-32;
         
        }
         else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0'; // for \0
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    StrcpytoggleX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

