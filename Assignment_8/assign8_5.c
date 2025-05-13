#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSqMeter = 0.0929 * iNo;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %.4lf" , dRet);

    return 0;
}