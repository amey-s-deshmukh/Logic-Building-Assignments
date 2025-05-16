#include<stdio.h>
#include<stdint.h>


int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountFour(iValue);

    printf("Frequency of digits less than 6 is : %d",iRet);

    return 0;
}