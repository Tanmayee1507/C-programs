#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iSize = 0;
    int iCnt=0;
    int *ptr = NULL;
    int iRet = 0;
    printf("Enter the number elements:\n");
    scanf("%d",&iSize);

ptr=(int*)malloc(iSize * sizeof(int));
printf("Enter the elements of array\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt= 0; iCnt<iSize;iCnt++)
    {
    printf("%d\n",ptr[iCnt]);
    }

    iRet = Addition(ptr,iSize);
    printf("Addition is:%d\n", iRet);
    free(ptr);
    return 0;
}