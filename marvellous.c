#include<stdio.h>
#include "ppa.h"

int main()
{
    struct Demo obj;
    printf("Inside main \n");
    printf("Rate pf interest:%f\n",ROI);
    printf("Fees of logic building:%d\n",FEES);
    printf("size of Demo structure:%d\n",sizeof(obj));

    return 0;
}
