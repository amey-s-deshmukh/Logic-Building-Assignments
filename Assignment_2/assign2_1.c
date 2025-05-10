#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    if(iNo1 < 0)
    {
        iNo1 = iNo1 * (-1);       //Updater
    }

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("*\n");
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