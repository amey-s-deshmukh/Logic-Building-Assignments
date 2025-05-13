#include<stdio.h>

#define ERR_ZERO -1

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo == 0)
    {
        return ERR_ZERO;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_ZERO)
    {
        printf("Factorial of 0 is 0");
    }
    else
    {
        printf("Factorial of %d is : %d", iValue , iRet);

    }

    return 0;
}