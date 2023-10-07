#include<stdio.h>
void main()
{
    int x;
    printf("Enter the value of : ");  //Asking to enter the value from the user
    scanf("%d",&x);
    if(x%2==0)   // condition to check whether the entered value is even or odd... 
    {
        printf("\nThe value is Even : %d",x);   //if the reminder is zero then 'Even' will be printed
    }
    else
    {
        printf("\nThe value is Odd : %d",x);   //if the reminder is zero then 'Odd' will be printed
    }
}