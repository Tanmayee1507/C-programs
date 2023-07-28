//reverse the string
//str1 DeMo = omed
// time complexity is n/2
#include<stdio.h>
void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    start = str;
    end = str;

    while((*end !='\0'))
    {
        end++;

    }
    end--;//  \0 cha ek ghar alikade yenya sathi
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
   
   
}

int main()
{
    char Arr[20];
    printf("Enter the first string:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

        printf("Reverse string is:%s\n", Arr);

    return 0;
}
