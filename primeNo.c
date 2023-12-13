#include<stdio.h>
void main()
{
    int x,i,count=0;
    printf("Enter X : ");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nPrime Number");
    }
    else
    {
        printf("\nNot a Prime Number");
    }
}