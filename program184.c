//copy string from
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrcpysmallX(char *src, char *dest)
{
    
    while(*src!='\0')
    {
        if((*src>='a')&& (*src<='z'))
        {
        *dest = *src;
        dest++; // inside if to avoid white boxes/spaces
        }
        src++;
        
    }
    *dest = '\0'; // for \0
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    StrcpysmallX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

