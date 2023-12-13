#include<stdio.h>
void main()
{
    int x,y,z,a,b;
    float c;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    z=x+y;
    printf("\nThe addition is : %d",z);
    a=x-y;
    printf("\nThe subtraction is : %d",a);
    b=x*y;
    printf("\nThe multiplication is : %d",b);
    c=(float)x/(float)y;
    printf("\nThe division is : %.2f",c);
}