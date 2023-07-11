/*
output: 
      
        *   a   a   a   a
        b   *   b   b   b
        c   c   *   c   c
        d   d   d   *   d
        e   e   e   e   *
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
   for(i = 1, ch ='a'; i <= iRow; i++, ch++)//outer loop
{
    for(j =1; j<= iCol; j++)//inner loop reduced complexity
    {
        if(i == j)
        {
            printf("*\t");
        }
        else
        {
    
    printf("%c\t", ch);
    
    }
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