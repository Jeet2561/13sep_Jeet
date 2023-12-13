#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Enter m1 : ");
    scanf("%d",&m1);
    printf("Enter m2 : ");
    scanf("%d",&m2);
    printf("Enter m3 : ");
    scanf("%d",&m3);
    printf("Enter m4 : ");
    scanf("%d",&m4);
    printf("Enter m5 : ");
    scanf("%d",&m5);
    total = m1+m2+m3+m4+m5;
    printf("\nThe total is : %d",total);
    per = (float)total/5;
    printf("\nThe percentage is : %.2f",per);
    if(per>75)
    {
        printf("\nDistinction");
    }
    else if(per>60 && per<=75)
    {
        printf("\nFirst Class");
    }
    else if(per>50 && per<=60)
    {
        printf("\nSecond Class");
    }
    else if(per>35 && per<=50)
    {
        printf("\nPass Class");
    }
    else
    {
        printf("\nFail");
    }
}