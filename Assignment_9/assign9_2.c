#include<stdio.h>
#include<stdbool.h>


bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = true;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = false;
            break;
        }
        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == false)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not contains Zero");       
    }

    return 0;
}