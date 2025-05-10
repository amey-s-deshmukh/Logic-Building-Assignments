#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL Check(int iNo1)
{
  if(iNo1 % 5 == 0)
  {
    return TRUE;
  }else
  {
    return FALSE;
  }

}

int main()
{
    int iValue1 = 0;

    BOOL bRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue1);

    bRet = Check(iValue1);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5",iValue1);
    }
    else
    {
        printf("%d is not divisible by 5",iValue1);
    }
    
    return 0;
}