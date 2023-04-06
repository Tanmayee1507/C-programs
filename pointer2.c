#include<stdio.h>
int main()
{
    int No =11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****a =&r;
    int *****b = &a;
    int ******c = &b;

    printf("%d \n",*p);
     printf("%d \n",**q);
      printf("%d \n",***r);
       printf("%d \n",****a);
        printf("%d \n",*****b);
         printf("%d \n",******c);
          printf("%d \n",No);
          return 0;

}
