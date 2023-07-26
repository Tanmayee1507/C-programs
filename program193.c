//copy string after prev string a.k.a concatenation with spaces
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrncpyX(char *src, char *dest, int iLength)
{
    
    while((*src != '\0')&&(iLength != 0 ))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    } 
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    
    printf("ENter the no of characters that you want to concate:\n");
    scanf("%d", &iNo);
    StrncpyX(Arr, Brr, iNo);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

