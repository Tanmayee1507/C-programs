#include<stdio.h>

int main()
{
    int Std = 0;
    
    printf("Enter your standard: \n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1 :
            printf("Your exam is at 1 p.m.\n");
            break;
         case 2 :
            printf("Your exam is at 2 p.m.\n");
            break;
            case 3 :
            printf("Your exam is at 3 p.m.\n");
            break;
            case 4 :
            printf("Your exam is at 4 p.m.\n");
            break;
            default:
            printf("Invalid standard\n");
            break;
    }
    return 0;

}