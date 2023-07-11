/*
output: 
*   *   *   *   *
*   *   *   *
*   *   *
*   *
*

*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iNo = 0;
   


   
//      1       2        3
   for(i = iRow; i >= 1; i--)//outer loop
{
    for(j =1;j<=i;j++)// same output as below
    //for(j =i; j>= 1; j--)//inner loop reduced complexity
    {
       
      printf("*\t");
    
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