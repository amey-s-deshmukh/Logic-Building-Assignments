#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEvenOdd(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue1);

    bRet = CheckEvenOdd(iValue1);

    if(bRet == TRUE)
    {
        printf("%d is even number",iValue1);
    }
    else
    {
        printf("%d is odd number",iValue1);

    }

    return 0;
}