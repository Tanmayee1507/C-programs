#include<stdio.h>       //IO
#include<stdlib.h>      //Memory Management

void Demo(int Arr[], int iLength)       //void(int *Arr, int iLength)
{
        // Perform operation on array
}
int main()          //Entry point function
{
    int iSize = 0;      //to store size of Array
    int iCnt=0;     //loop counter
    int *ptr = NULL;        //
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

    Demo(ptr,iSize);
    free(ptr);  //Demo(400,4)Address of Array, iSize/iLength
    return 0;
}