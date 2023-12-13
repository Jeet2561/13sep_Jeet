#include<stdio.h>
void main()
{
    int x[4][4],total=0;
    printf("Enter the 16 values : ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\nX : \t\n");
    }
    total=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("\t %d ",x[i][j]);
        }
        printf("\n");
    }
}