#include<stdio.h>

int KMToMeter(int iNo)
{
    int iMultFact = 1000;
    return (iNo * iMultFact);
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue1);

    iRet = KMToMeter(iValue1);

    printf("Distance in meter : %d",iRet);
    
    return 0;
}