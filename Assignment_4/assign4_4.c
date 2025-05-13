#include<stdio.h>

#define ERR_ZERO -1


int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

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
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

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
        printf("Sum of non factors of %d is : %d" , iValue , iRet);
    }

    return 0;
}