/*
output: 1   2   3   4
        *   *   *   *
        1   2   3   4
        *   *   *   *
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iNo = 0;
   
 for(i = 1; i <=iRow ; i++)//outer loop
{
    for(j =1; j<=iCol; j++)//inner loop
    {
        if((i%2)==0) 
        {
    printf("*\t", iRow);
        }
        else
        {
            printf("%d\t",j);
            
        }
    
    }
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