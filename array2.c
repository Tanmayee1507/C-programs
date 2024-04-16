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

