#include<stdio.h>

int main()
{
    int No = 11;
    int *p = &No;
    int *q = &No;

    printf("%d \n",No);
    printf("%d \n", *p);
    printf("%d \n", *q);
    return 0;

}
