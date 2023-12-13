#include<stdio.h>
void main()
{
    int x = 0,nxt = 1,sum = 1,n;
    printf("Enter number : ");
    scanf("%d",&n);
    while(x<=n)
    {
        printf("%d ",x);
        x=nxt;
        nxt=sum;
        sum=x + nxt;
    }
}