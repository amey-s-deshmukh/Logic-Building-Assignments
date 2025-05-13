#include<stdio.h>

#define ERR_ZERO -1

int MUltFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    if(iNo == 0)
    {
        return ERR_ZERO;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MUltFact(iValue);


    if(iRet == ERR_ZERO)
    {
        printf("0 has no factors. Give another input");
    }
    else
    {
    printf("Multiplication of factors is : %d",iRet);
    }

    return 0;
}