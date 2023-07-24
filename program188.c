//copy string from
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrcpyrevX(char *src, char *dest)
{
    int iLength = 0;
    
    while(*src != '\0')
    {
        src++;
        iLength ++;
        *dest = *src;
         
    }
    src--;
    for(iLength=*src;iLength!=0;iLength--)
    {
    *dest =*src;
    src--;
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
    StrcpyrevX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

