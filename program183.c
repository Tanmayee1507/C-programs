//copy string from one arr to other
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrcpyX(char *src, char *dest)
{
    
    while(*src!='\0')
    {
        *dest = *src;
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
    StrcpyX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

