#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *iptr = NULL;
    printf("Enter thr number of elements:\n");
    scanf("%d",&iSize);

    iptr = (int *)malloc(sizeof(int));
    if(iptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Memory allocated successfully\n");

    return 0;
}