#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1 = {11,90.90,51};
    struct Demo *ptr = &obj1;
    obj1.i = 11;
    ptr->f = 90.90;
    ptr->j = 51;

    printf("%d\n",ptr->i);
    printf("%d\n",ptr->j);
    printf("%f\n",ptr->f);

    return 0;

}
