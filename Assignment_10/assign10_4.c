#include<stdio.h>
#include<stdint.h>


int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;    

    if (iNo == 0)
    {
        return 1;  
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of non zero Digits : %d",iRet);

    return 0;
}