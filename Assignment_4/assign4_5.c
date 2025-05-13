#include<stdio.h>

#define ERR_ZERO -1

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo == 0)
    {
        return ERR_ZERO;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return (iSumNonFact - iSumFact);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    if(iRet == ERR_ZERO)
    {
        printf("0 has no factors. Give another input");
    }
    else
    {
        printf("Difference between Sum of non factors and factors of %d is : %d" , iValue , iRet);
    }

    return 0;
}