#include<stdio.h>
#include<stdint.h>


int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;    

    if (iNo == 0)
    {
        return 1;  
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Frequency of digits in range 3 - 7 : %d",iRet);

    return 0;
}