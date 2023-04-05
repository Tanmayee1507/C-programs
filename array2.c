#include<stdio.h>
int main()
{
int Arr[2] ={10,20,30,40};
printf("%d",Arr[0]);
printf("%d",Arr[1]);
printf("%d",Arr[2]);

printf("%d", sizeof(Arr));
printf("%d",sizeof(Arr[2]));
printf("%d",Arr);
printf("%d",&Arr);
printf("%d",&Arr[0]);
printf("%d",&Arr[1]); 
printf("%d",&Arr[2]);
}

/*array2.c: In function 'main':
array2.c:4:20: warning: excess elements in array initializer
 int Arr[2] ={10,20,30,40};
                    ^~
array2.c:4:20: note: (near initialization for 'Arr')
array2.c:4:23: warning: excess elements in array initializer
 int Arr[2] ={10,20,30,40};
                       ^~
array2.c:4:23: note: (near initialization for 'Arr')*/
