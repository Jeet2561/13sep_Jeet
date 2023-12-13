#include<stdio.h>
void main()
{
    int x;
    printf("Enter the year : ");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("\nLeap year");
    }
    else
    {
        printf("\nNot a leap year");
    }
}