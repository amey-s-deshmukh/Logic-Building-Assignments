#include<stdio.h>

void Display(int iNo1)
{
    if(iNo1 < 0)
    {
        iNo1 = iNo1 * (-1);                //Updater
    }

    while(iNo1 >= 0)
    {
        printf("*\n");
        iNo1--;
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