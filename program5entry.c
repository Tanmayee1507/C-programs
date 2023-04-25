#include"program5header.h"

// entry point function
int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number:\n",iNo1);
    scanf("%d",&iNo1);

    printf("Enter second number:\n",iNo2);
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is:%d\n",iAns);

    return 0;
    
}