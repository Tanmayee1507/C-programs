/*
output: 
        A
        A   B
        A   B   C
        A   B   C   D
        A   B   C   D   E
        A   B   C   D   E   F
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iNo = 0;
   char ch = 'A';

   if(iRow != iCol)
   {
    printf("Invalid input\n");
    return;
   }
   
//      1       2        3
   for(i = 1; i <= iRow; i++)//outer loop
{
    for(j =1, ch = 'A'; j<= i; j++, ch++)//inner loop reduced complexity
    {
    
    printf("%c\t", ch);
    
    }
    
    printf("\n");
    printf("\n");
}
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter row size: \n");
    scanf("%d",&iValue1);
     printf("Enter column size: \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}