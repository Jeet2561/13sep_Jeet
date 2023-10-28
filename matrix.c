#include <stdio.h>
void main()
{
    int x[3][3];
    printf("Enter 9 values : ");
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\nX : \n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("\t%d",x[i][j]);
        }
        printf("\n");
    }
