#include<stdio.h>
struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo Arr[4];

    Arr[0].i = 11;
    Arr[0].f = 90.0;
    Arr[1].i = 21;
    Arr[1].f = 95.0;
    Arr[2].i = 31; 
    Arr[2].f = 97.0;
    Arr[3].i = 41;
    Arr[3].f = 99.0;

    printf("%d",Arr[0].i);
    printf("%f",Arr[0].f);

     printf("%d",Arr[1].i);
    printf("%f",Arr[1].f);

     printf("%d",Arr[2].i);
    printf("%f",Arr[2].f);

     printf("%d",Arr[3].i);
    printf("%f",Arr[3].f);

    return 0;

}
