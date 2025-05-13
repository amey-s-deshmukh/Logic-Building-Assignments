#include<stdio.h>

#define ERR_ZERO -1


void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)
    {
        printf("0 has no factors. Give another input");
    }
    else
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                printf("%d\n",iCnt);
            }
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}