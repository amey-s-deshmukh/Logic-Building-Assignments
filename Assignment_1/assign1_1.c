#include<stdio.h>

#define ERR_ZERO -1

float Divide(int iNo1, int iNo2)
{
    if(iNo2 == 0)
    {
        return ERR_ZERO;
    }

    float fAns = 0.0f;

    fAns = (float)iNo1 / (float)iNo2 ; 

    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    float fRet = 0.0f;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);
    
    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    fRet = Divide(iValue1,iValue2);

    if(fRet == ERR_ZERO)
    {
        printf("You Entered 0 as devider");
    }

    printf("Division is : %.2f",fRet);
    
    return 0;
}