#include<stdio.h>

void DisplayEvenFactor(int iNo1)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            if(iNo1 % iCnt == 0)
            {
                printf("%d\n",iCnt);
            }
        }
    }
}

int main()
{
    int iValue1 = 0;


    printf("Enter the number : ");
    scanf("%d",&iValue1);

    DisplayEvenFactor(iValue1);
    
    return 0;
}