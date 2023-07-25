//copy string after prev string a.k.a concatenation with spaces
// DEMO\0  madhla \0 pn copy vhayla hava ani he fakta programmer la kalta user la nahi
#include<stdio.h>
void StrcatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() 
{
    char Arr[20];
    char Brr[20]= "Demo";

    printf("ENter string:\n");
    scanf("%[^\n]s", Arr);
    
    StrcatX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}

