#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConversionRate = 70;
    return (iNo * iConversionRate);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in Dollar ($) : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("INR : %d",iRet);

    return 0;
}