#include<stdio.h>

void Display(int iNo1)
{
    if(iNo1 < 10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }

    
}

int main()
{
    int iValue1 = 0;


    printf("Enter the number : ");
    scanf("%d",&iValue1);

    Display(iValue1);
    
    return 0;
}