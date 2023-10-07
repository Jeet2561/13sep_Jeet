#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of z : ");
    scanf("%d",&z);
    if(x>y)
    {
        if(x>z)
        {
            printf("\nThe value of X is greater : %d",x);
        }
        else
        {
            printf("\nThe value of Z is greater : %d",z);
        }
    }
    else
    {
        if(y>z)
        {
            printf("\nThe value of Y is greater : %d",y);
        }
        else
        {
            printf("\nThe value of Z is greater : %d",z);
        }
    }
}