#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iLength)
{
    int iCnt =0;
    int iSum= 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        
    }
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;
    printf("enter number of elements:");
    scanf("%d", &iSize);
    ptr =(int *)malloc(iSize * sizeof(int));
    printf("Elements of array are:\n");
    for(iCnt= 0;iCnt<iSize;iCnt++)
    {
        printf("%d",ptr[iCnt]);
    }

    fRet = Average(ptr,iSize);
    printf("Average is:%f",fRet);
    free(ptr);
    return 0;
}