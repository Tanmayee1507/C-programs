/*
output: *   *   *   *   *   *
        *                   *
        *                   *  
        *                   *
        *                   *
        *   *   *   *   *   *
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iNo = 0;
   
//      1       2        3
   for(i = 1; i <= iRow; i++)//outer loop
{
    for(j =1; j<=iCol; j++)//inner loop
    {
        if((i == 1) || (i == iRow) || ( j == iCol) || (1 == j) )
        {
    printf("*\t", iCol);
        }
        else
        {
            printf(" \t",i);
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